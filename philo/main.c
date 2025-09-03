/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <lruiz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 11:22:47 by lruiz-to          #+#    #+#             */
/*   Updated: 2025/09/03 15:28:17 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_rules *rules;
	t_philo *philos;
	
	rules = malloc(sizeof(t_rules));
	philos = malloc(ft_atoi(argv[1]) * sizeof(t_philo));
	if (check_args(argc, argv) == 1)
		return (ft_error("The arguments are not correct"));
	else
		init_both(rules,philos,argc, argv);
}
