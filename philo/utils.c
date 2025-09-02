/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <lruiz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:58:40 by lruiz-to          #+#    #+#             */
/*   Updated: 2025/09/01 09:26:53 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	cont;

	res = 0;
	cont = 0;
	sign = 1;
	while (str[cont] == 32 || (str[cont] >= 9 && str[cont] <= 13))
		cont++;
	if (str[cont] == '+' && str[cont +1] != '-')
		cont++;
	if (str[cont] == '-')
	{
		sign = sign * -1;
		cont++;
	}
	while (ft_isdigit(str[cont]))
	{
		res = (res * 10) + (str[cont] - 48);
		cont++;
	}
	return (res * sign);
}
