/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*    ft_rev_params.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/19 01:23:36 by username         #+#    #+#              */
/*   Updated: 2026/07/19 02:26:04 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argc--;
	while (argc > 0)
	{
		while (argv[argc][i])
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
		argc--;
		write(1, "\n", 1);
		i = 0;
	}
	return (0);
}
