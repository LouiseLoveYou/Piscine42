/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksella <ksella@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 12:10:29 by ksella            #+#    #+#             */
/*   Updated: 2026/07/12 12:21:35 by ksella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char src[] = "tung tung tung sahur";
// 	char dest[100];
// 	ft_strcpy(dest, src);
// 	printf("%s\n", src);
// 	printf("%s\n", dest);
// 	return(0);
// }
