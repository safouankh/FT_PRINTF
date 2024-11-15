/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:05:37 by sael-kha          #+#    #+#             */
/*   Updated: 2024/11/15 11:15:16 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long n, char format)
{
	if (n >= 16)
	{
		ft_puthex(n / 16, format);
	}
	if (format == 'a')
	{
		write(1, &"0123456789abcdef"[n % 16], 1);
	}
	else
	{
		write(1, &"0123456789ABCDEF"[n % 16], 1);
	}
}

size_t	calculate_hex_length(unsigned long ptr)
{
	size_t	hex_length;

	hex_length = 0;
	while (ptr)
	{
		ptr /= 16;
		hex_length++;
	}
	hex_length += (hex_length == 0);
	return (hex_length);
}

int	printp(void *nbr)
{
	unsigned long	ptr;
	size_t			count;
	size_t			hex_length;

	ptr = (unsigned long)nbr;
	if (nbr == NULL)
	{
		write(1, "0x0", 3);
		count = 3;
	}
	else
	{
		write(1, "0x", 2);
		count = 2;
		hex_length = calculate_hex_length(ptr);
		ft_puthex((unsigned long)nbr, 'a');
		count += hex_length;
	}
	return (count);
}
