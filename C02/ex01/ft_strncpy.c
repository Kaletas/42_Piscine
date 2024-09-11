/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:11:54 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/11 14:23:26 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *str, unsigned int n);

char	*ft_strncpy(char *dest, char *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && str[i])
	{
		dest[i] = str[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[50] = "World1";
// 	char	*str = "Hello";
// 	unsigned int n = 5;

// 	printf("Original: %s\n", str);
// 	printf("After strncpy: %s\n", strncpy(dest, str, n));
// 	printf("After ft_strncpy: %s\n", ft_strncpy(dest, str, n));
// }
