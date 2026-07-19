/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksella <ksella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 19:28:06 by ksella            #+#    #+#             */
/*   Updated: 2026/07/11 22:24:50 by ksella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// int main()
// {
//     int x = 27; 
//     int y = 4;
//     int mod = 0;
//     int div = 0;

//     ft_div_mod(x, y, &div, &mod);

//     char cara = div + '0';
//     write(1, &cara, 1);
//     cara = mod + '0';
//     write(1, &cara, 1);
//     return(0);
// }