/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lruiz-to <lruiz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 11:24:28 by lruiz-to          #+#    #+#             */
/*   Updated: 2025/09/02 13:21:51 by lruiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H
# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
	
//check_args
int	check_args(int n, char **str);
//utils
int	ft_atoi(const char *str);


typedef struct philo
{
	int				id;
	int				is_eating;
	long long		last_time_eated;
	int				times_eat;
	int				is_alive;
	pthread_mutex_t	*r_fork;
	pthread_mutex_t	*l_fork;
	pthread_t		thread;
	t_table			*tab;
}	t_philo;

typedef struct table
{
	int				death_flag;
	int				philo_amount;
	long long		death_time;
	long long		eat_time;
	long long		sleep_time;
	int				nbr_eat;
	long long		starttime;
	pthread_t		thread;
	pthread_mutex_t	*writer;
	t_philo			**philosophers;
}	t_table;

#endif