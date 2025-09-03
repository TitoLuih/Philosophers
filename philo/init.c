/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <lruiz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:58:44 by lruiz-to          #+#    #+#             */
/*   Updated: 2025/09/03 13:46:30 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	init_rules(t_rules *rules, int argc, char **argv)
{
	if (pthread_mutex_init(&rules->write_lock, NULL) != 0 ||
		pthread_mutex_init(&rules->death_lock, NULL) != 0)
			return (EXIT_FAILURE);
	rules->n_philos = ft_atoi(argv[1]);
	rules->die_time = ft_atoi(argv[2]);
	rules->eat_time = ft_atoi(argv[3]);
	rules->sleep_time = ft_atoi(argv[4]);
	rules->start_time = 0;
	if (argc == 6)
		rules->meals_required = ft_atoi(argv[5]);
	else
		rules->meals_required = 0;
	return (EXIT_SUCCESS);
}

int	init_philos(t_philo *philo, int i, t_rules *rules)
{
	if (pthread_mutex_init(&philo[i].meal_lock, NULL) != 0)
		return (EXIT_FAILURE);
	philo[i].id = i + 1;
	philo[i].meals_done = 0;
	philo[i].is_dead = 0;
	philo[i].last_meal = 0;
	philo[i].rules = rules;
	philo[i].left_fork = NULL;
	philo[i].right_fork = NULL;
	return (EXIT_SUCCESS);
}

int	init_both(t_rules *rules, t_philo *philo, int argc, char **argv)
{
	int i;
	
	i = 0;
	if (init_rules(rules, argc, argv) != EXIT_SUCCESS)
		return (EXIT_FAILURE);
	if (!philo)
		return (EXIT_FAILURE);
	while (i < rules->n_philos)
	{
		if (init_philos(philo, i, rules) != EXIT_SUCCESS)
		{
			//+ free memory of both
			return (EXIT_FAILURE);
		}
		i++;
	}
	return (EXIT_SUCCESS);
}
