/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:49:52 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/11 14:24:10 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	index;

	index = 0;
	while (index < size - 1)
	{
		if (tab[index] > tab[index + 1])
		{
			temp = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = temp;
			index = -1;
		}
		index++;
	}
}

// int	main(void)
// {
// 	int	tab[] = {42, -1337, 17, 54, 13, 80085, 2137};
// 	int	size = 7;
// 	int	i = 0;

// 	printf("BEFORE SORT:\n");
// 	while (tab[i])
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_sort_int_tab(tab, size);
// 	i = 0;
// 	printf("AFTER SORT:\n");
// 	while (tab[i])
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
