/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 00:27:15 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/18 16:39:12 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	result = malloc(sizeof(int) * (max - min));
	if (!result)
		return (0);
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
