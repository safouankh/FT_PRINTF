/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:01:50 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/26 17:43:46 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char ft_putfloat(float nbr)
{
    int int_nbr = (int)nbr;
    float float_nbr = int_nbr - nbr;
    ft_putnbr(int_nbr);
    if((int)nbr != nbr)
    {
        ft_putchar('.');
        float_nbr *= 1000000;
        ft_putnbr(float_nbr);
    }
    return 0;
}