/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:54:08 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/28 15:38:11 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putnbr(int nbr)
{
    if(nbr == -2147483648)
    {
        write(1,"-2147483648",11);
        return ;
    }
    if(nbr < 0)
    {
        write(1,"-",1);
        nbr *= -1;
    }
    if(nbr > 9)
    {
        ft_putnbr(nbr / 10);
    }
    ft_putchar(nbr % 10 + '0');
}