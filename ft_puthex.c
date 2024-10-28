/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:05:37 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/28 16:29:03 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
void    ft_puthex(unsigned int nbr, char type)
{
    unsigned int reminder;
    char hex[20];
    int i;

    i = 0;
    if (nbr < 0)
        nbr *= -1;
    if (nbr == 0)
    {
        ft_putchar('0');
        return ;
    }
    while(nbr)
    {
        reminder = nbr % 16;
        if (reminder < 10)
        {
            hex[i] = reminder + '0';
        }else
        {
            hex[i] = (reminder - 10) + type;
        }
        nbr /= 16;
        i++;
    }
    while (--i >= 0)
        ft_putchar(hex[i]);
}
*/

void ft_puthex(unsigned long n, char format) {
    if (n >= 16) {
        ft_puthex(n / 16, format);
    }
    if (format == 'a') {
        write(1, &"0123456789abcdef"[n % 16], 1); // Lowercase
    } else {
        write(1, &"0123456789ABCDEF"[n % 16], 1); // Uppercase
    }
}