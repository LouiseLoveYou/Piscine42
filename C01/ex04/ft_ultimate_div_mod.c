/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksella <ksella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 19:28:06 by ksella            #+#    #+#             */
/*   Updated: 2026/07/12 14:48:03 by ksella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a / *b;
	*b = *a % *b;
	*a = tmp;
}
// int main()
// {
//     int x = 27; 
//     int y = 4; 
//     ft_ultimate_div_mod(&x, &y);
//     char cara = x + '0';
//     write(1, &cara, 1);
//     write(1, "\n",1);
//      cara = y + '0';
//     write(1, &cara, 1);
//     return(0);
// }