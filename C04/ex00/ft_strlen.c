/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksella <ksella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 18:04:28 by username          #+#    #+#             */
/*   Updated: 2026/07/16 21:41:16 by ksella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	str[] = "tung tung tung sahur";
// 	int		i;

// 	i = ft_strlen(str);
// 	printf("string : %s\n nombre de caractere : %d\n", str, i);
// 	return (0);
// }
