/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:19:13 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/09 19:22:57 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

//This is for test purpose only
/*int	main(void)
{
	ft_is_negative(8);
	ft_is_negative(-2);
	ft_is_negative(0);
	ft_is_negative(42);
} */