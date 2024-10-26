/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:11:05 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/26 17:50:32 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *s, ...)
{
    int i = 0;
    int count = 0;
    va_list args;
    va_start(args, s);
    while(s[i])
    {
        if(s[i] == '%' && s[i + 1] != '\0')
        {
            i++;
            if(s[i] == 's'){
                ft_putstr(va_arg(args, char *));
                i++;
            }else if(s[i] == '%'){
                ft_putchar(s[i]);
                i++;
            }else if(s[i] == 'i'){
                ft_putnbr(va_arg(args, int));
                i++;
            }else if(s[i] == 'd'){
                ft_putfloat(va_arg(args, double));
                i++;
            }
        }else{
            ft_putchar(s[i]);
            i++;
        }
    }
    return (i);
    va_end(args);
}