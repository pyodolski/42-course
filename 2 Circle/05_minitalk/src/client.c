/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:28:03 by jupyo             #+#    #+#             */
/*   Updated: 2024/08/08 17:24:25 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	send_sig(unsigned char s, int server_pid)
{
	int	i;

	i = 8;
	while (--i >= 0)
	{
		if (s & (1 << i))
			kill(server_pid, SIGUSR1);
		else
			kill(server_pid, SIGUSR2);
		usleep(300);
	}
}

int	is_valid_pid(const char *pid_str)
{
	int	i;

	i = 0;
	while (pid_str[i])
	{
		if (!ft_isdigit(pid_str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	server_pid;
	int	i;

	if (argc == 3)
	{	
		if (!is_valid_pid(argv[1]))
		{
			ft_putstr("Error: Invalid PID.\n");
			return (1);
		}
		server_pid = ft_atoi(argv[1]);
		if (server_pid <= 0)
		{
			ft_putstr("Error: Invalid PID.\n");
			return (1);
		}
		if (!server_pid)
			return (0);
		i = -1;
		while (argv[2][++i])
			send_sig((unsigned char)argv[2][i], server_pid);
	}
	return (0);
}				
