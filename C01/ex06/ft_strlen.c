/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:52:56 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/10 11:58:00 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count_len;

	count_len = 0;
	while (*str)
	{
		count_len++;
		str++;
	}
	return (count_len);
}

//This is for test purpose only
// int	main(void)
// {
// 	printf("%d", ft_strlen("Hehehelmans\n"));
// }
