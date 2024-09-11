/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:22:26 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/12 00:13:42 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);
char	*ft_strlowcase(char *str);
int		ft_isdelimiter(char letter);

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (str);
}

int	ft_isdelimiter(char letter)
{
	if (letter == 32 || letter == '+' || letter == '-')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if ((str[i] >= 'a' && str[i] <= 'z') && ft_isdelimiter(str[i - 1]))
			str[i] -= 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[];
//	str[] = "salut, comment 42mots quarante-deux; cinquante+et+un";

// 	ft_strcapitalize(str);
// 	printf("Capitalized: %s\n", str);

// 	return (0);
// }
