/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexhelper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:22:25 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/31 18:22:58 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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