/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksella <ksella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 17:59:37 by ksella            #+#    #+#             */
/*   Updated: 2026/07/11 19:00:31 by ksella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
// int main()
// {
//     int a = 67;
//     int b = 69;
//     printf("before swap %d %d\n", a,b);
//     ft_swap(&a, &b);
//     printf("after swap %d %d\n", a,b);
//     return(0);
// }