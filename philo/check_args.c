/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <lruiz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 09:25:23 by lruiz-to          #+#    #+#             */
/*   Updated: 2025/09/03 15:25:32 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_args(int n, char **str)
{
	int	i;
	int	j;
	
	i = 1;
	if (n < 5 || n > 6)
		return (EXIT_FAILURE);
	while (str[i] != NULL)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			if (ft_isdigit(str[i][j]) != EXIT_SUCCESS)
				return (EXIT_FAILURE);
			j++;
		}
		if ((ft_atoi(str[i])) <= 0)
			return (ft_error("caracola"));
		i++;
	}
	return (EXIT_SUCCESS);
}
