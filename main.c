/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sael-kha <sael-kha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:13:27 by sael-kha          #+#    #+#             */
/*   Updated: 2024/10/27 15:54:49 by sael-kha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
    int i = -42;
    ft_printf("safouan el %s and i'm %i years old %u%% shour that you'are gay", "khammari", i, i);
    ft_printf("\ntest for hex : %X", 4347182914);
}