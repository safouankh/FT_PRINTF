/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:11:05 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/28 19:49:19 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int prints(const char* str)
{
    int count;
    
    count = 0;
    if (str == NULL){
        write(1,"(null)",6);
        count += 6;
    }else{
        while (str[count])
        {
            write(1,&str[count],1);
            count++;
        }
    }
    return count;
}

int printid(int nbr)
{
    int nbr1;
    int count;

    count = 0;
    nbr1 = nbr;
    ft_putnbr(nbr);
    count += (nbr1 == 0);
    if (nbr1 < 0)
        nbr1 = -nbr1;
    while (nbr1)
    {
        nbr1 /= 10;
        count++;
    }
    count += (nbr < 0);
    return (count);
}

int printu(unsigned int nbr)
{
    int count;

    count = 0;
    ft_putunbr(nbr);
    unsigned int nbr2 = (unsigned int)nbr;
    count += (nbr2 == 0);
    while (nbr2)
    {
        nbr2 /= 10;
        count++;
    }
    return (count);
}

int printx(unsigned int nbr, char type)
{
    int count;

    count = 0;
    ft_puthex(nbr, type - 23);
    count += (nbr == 0);
    while (nbr){
        nbr /= 16;
        count++;
    }
    return (count);
}

int printc(char c)
{
    int count;

    count = 1;
    ft_putchar(c);
    return count;
}

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
                void *ptr = va_arg(args, void *);
                if (ptr == NULL) {
                    write(1, "0x0", 3);
                    count += 3;
                } else {
                    write(1, "0x", 2);
                    count += 2;
                    unsigned long nbr = (unsigned long)ptr;
                    int hex_length = 0;

                    // Count how many hexadecimal digits are needed
                    unsigned long temp = nbr;
                    while (temp) {
                        temp /= 16;
                        hex_length++;
                    }

                    // If the address is 0, we want to handle it correctly
                    if (hex_length == 0) {
                        hex_length = 1; // At least one digit for 0
                    }

                // Print the actual address in hexadecimal
                ft_puthex(nbr, 'a'); // or 'A' if you want uppercase

                count += hex_length; // Add the length of the hexadecimal representation
                }
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