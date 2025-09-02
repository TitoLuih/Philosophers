/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <lruiz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:25:23 by lruiz-to          #+#    #+#             */
/*   Updated: 2025/09/02 09:36:03 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}

int	check_args(int n, char **str)
{
	int	i;
	int	j;

	i = 0;
	if (n != 5)
		return (EXIT_FAILURE);
	while (str[i] != NULL)
	{
		j = 0;
		while (str[i][j] != NULL)
		{
			if (ft_isdigit(str[i][j]) == 1)
				return (EXIT_FAILURE);
			j++;
		}
		if (ft_atoi(str[i]) <= 0)
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
