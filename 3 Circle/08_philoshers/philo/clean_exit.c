/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 22:01:04 by jupyo             #+#    #+#             */
/*   Updated: 2025/01/25 22:02:51 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	clean_table(t_table *table)
{
	free (table->philo);
	free (table->fork_padlock);
}

void	destroy_padlocks(t_table *table)
{
	int	i;

	i = -1;
	while (++i < table->philosophers)
		pthread_mutex_destroy(&table->fork_padlock[i]);
	clean_table(table);
	pthread_mutex_destroy(&table->print_padlock);
	pthread_mutex_destroy(&table->eat_padlock);
	pthread_mutex_destroy(&table->finish_padlock);
}

void	finish_dinner(t_table *table)
{
	int	i;

	i = -1;
	while (++i < table->philosophers)
		pthread_join(table->philo[i].thread, NULL);
	destroy_padlocks(table);
}

void	start_dinner_monitor(t_table *table)
{
	int	i;
	int	continue_flag;

	continue_flag = 1;
	while (continue_flag)
	{
		i = -1;
		table->ate_enough = 0;
		while (++i < table->philosophers)
		{
			if (continue_flag && is_someone_dead_or_full(&table->philo[i]))
				continue_flag = 0;
		}
		usleep(10);
	}
	finish_dinner(table);
}
