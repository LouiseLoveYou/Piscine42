/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksella <ksella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 05:29:20 by username          #+#    #+#             */
/*   Updated: 2026/07/19 07:01:51 by ksella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
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
// 		printf("ft_recursive_factorial(%d) = %d\n",
// 			tests[i], ft_recursive_factorial(tests[i]));
// 		i++;
// 	}
// 	return (0);
// }
