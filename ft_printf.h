/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:06:05 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/27 15:49:06 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int ft_printf(const char *s, ...);
char ft_putchar(char c);
char *ft_putstr(char *s);
void    ft_putnbr(int nbr);
void    ft_putunbr(unsigned int nbr);
void    ft_puthex(int nbr, char type);

#endif