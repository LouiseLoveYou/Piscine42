/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksella <ksella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 04:45:38 by username          #+#    #+#             */
/*   Updated: 2026/07/19 05:17:35 by ksella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	x;

	if (nb < 0)
		return (0);
	x = 1;
	i = 2;
	while (i <= nb)
	{
		x = x * i;
		i++;
	}
	return (x);
}

// int	main(void)
// {
// 	int	tests[] =
// 	{
// 		5
// 	};
// 	int	i;

// 	i = 0;
// 	while (i < 1)
// 	{
// 		printf("ft_iterative_factorial(%d) = %d\n",
// 			tests[i], ft_iterative_factorial(tests[i]));
// 		i++;
// 	}
// 	return (0);
// }
