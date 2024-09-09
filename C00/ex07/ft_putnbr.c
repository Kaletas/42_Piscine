/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:35:44 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/09 22:59:16 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = (long)nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}
//This is for test purpose only
// int	main(void)
// {
// 	ft_putnbr(-1337);
// 	ft_putchar('\n');
// }
