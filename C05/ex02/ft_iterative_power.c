/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksella <ksella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 07:11:13 by username          #+#    #+#             */
/*   Updated: 2026/07/19 07:42:20 by ksella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
// int	main(void)
// {
// 	int	nb[] =
// 	{
// 		5
// 	};
// 	int	power[] =
// 	{
// 		4
// 	};
// 	int	i;
// 	i = 0;
// 	while (i < 1)
// 	{
// 		printf("ft_iterative_power(%d, %d) = %d\n",
// 			nb[i], power[i], ft_iterative_power(nb[i], power[i]));
// 		i++;
// 	}
// 	return (0);
// }
