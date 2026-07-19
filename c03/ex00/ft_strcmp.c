/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksella <ksella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 05:44:57 by username          #+#    #+#             */
/*   Updated: 2026/07/15 17:47:20 by ksella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

// int	main(void)
// {
// 	char	a[] = "je t explose le fioN";
// 	char	b[] = "tung tung tung sahur,mnjkln";

// 	printf("%d", ft_strcmp(a, b));
// 	return (0);
// }
