/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:11:05 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/31 19:40:02 by sael-kha         ###   ########.fr       */
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
                count += prints(va_arg(args, char *));
            }else if(s[i] == '%'){
                ft_putchar(s[i]);
                count++;
            }else if(s[i] == 'i' || s[i] == 'd'){
                count += printid(va_arg(args, int));
            }else if(s[i] == 'u'){
                count += printu(va_arg(args, unsigned int));
            }else if(s[i] == 'x' || s[i] == 'X'){
                count += printx(va_arg(args, unsigned int), s[i]);
            }else if (s[i] == 'p') {
                count += printp(va_arg(args, void *));
            }
            else if(s[i] == 'c'){
                count += printc(va_arg(args, int));
            }
        }else{
            ft_putchar(s[i]);
            count++;
        }
        i++;
    }
    va_end(args);
    return (count);
}