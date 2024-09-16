/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:50:19 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/16 15:08:26 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	to_compare;
	int	i;

	to_compare = 0;
	i = 2;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= (nb / 2))
	{
		to_compare = i * i;
		if (to_compare == nb)
			return (i);
		i++;
	}
	return (0);
}
