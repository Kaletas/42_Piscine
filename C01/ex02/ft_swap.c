/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:24:21 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/10 00:29:46 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
//This is for test purpose only
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*pa;
// 	int	*pb;

// 	pa = &a;
// 	pb = &b;
// 	a = 13;
// 	b = 42;
// 	printf("%d\n%d\n", a, b);
// 	ft_swap(pa, pb);
// 	printf("%d\n%d\n", a, b);
// }
