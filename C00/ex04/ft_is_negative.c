/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksella <ksella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 11:05:23 by ksella            #+#    #+#             */
/*   Updated: 2026/07/11 22:42:54 by ksella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	p;
	char	c;

	if (n >= 0)
	{
		p = 'P';
		write(1, &p, 1);
	}
	else
	{
		c = 'N';
		write(1, &c, 1);
	}
}
// int main(void)
// {
//     ft_is_negative(-8);
// 	return (0);
// }