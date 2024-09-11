/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:22:26 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/11 17:24:45 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "hello world! this is 42testing with-multiple.words.";

// 	ft_strcapitalize(str);
// 	printf("Capitalized: %s\n", str);

// 	return (0);
// }
