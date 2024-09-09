/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:05:57 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/10 00:14:02 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

//This is for test purpose only
// int	main(void)
// {
// 	int	num;
// 	int	*ptr;

// 	num = 13;
// 	ptr = &num;
// 	printf("%d\n", num);
// 	ft_ft(ptr);
// 	printf("%d\n", num);
// }
