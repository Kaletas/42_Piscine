/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 23:57:55 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/15 00:24:09 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr_base(int nbr, char *base);
int		ft_base_count(char *base);

int	ft_base_count(char *base)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		if (base[i] == base[i + 1])
			return (0);
		i++;
	}
	while (base[count])
		count++;
	return (count);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		base_count;

	nb = (long)nbr;
	base_count = ft_base_count(base);
	if (base_count == 0 || base_count == 1)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= base_count)
		ft_putnbr_base(nb / base_count, base);
	write(1, &base[nb % base_count], 1);
}
