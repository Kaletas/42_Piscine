/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:31:48 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/10 00:42:28 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
//This is for test purpose only
// int	main(void)
// {
// 	int	value_1;
// 	int	value_2;
// 	int	value_div;
// 	int	value_mod;

// 	value_1 = 42;
// 	value_2 = 10;
// 	ft_div_mod(value_1, value_2, &value_div, &value_mod);
// 	printf("result div: %d, result mod: %d\n", value_div, value_mod);
// }
