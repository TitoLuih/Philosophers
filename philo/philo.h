/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <lruiz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 11:24:28 by lruiz-to          #+#    #+#             */
/*   Updated: 2025/09/03 13:38:38 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H
# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>

typedef struct s_rules
{
	int				n_philos;
	int				die_time;
	int				eat_time;
	int				sleep_time;
	int				meals_required;
	long long		start_time;
	pthread_mutex_t	write_lock;
	pthread_mutex_t	death_lock;
}	t_rules;

typedef struct s_philo
{
	int				id;
	int				meals_done;
	int				is_dead;
	long long		last_meal;
	t_rules			*rules;
	pthread_t		thread_id;
	pthread_mutex_t	meal_lock;
	pthread_mutex_t	*left_fork;
	pthread_mutex_t	*right_fork;
}	t_philo;

//check_args
int	check_args(int n, char **str);
//utils
int	ft_atoi(const char *str);
int	ft_error(char *str);
int	ft_isdigit(int c);
//check arguments
int	init_both(t_rules *rules, t_philo *philo, int argc, char **argv);

#endif