/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:49:23 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/15 13:28:23 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	int	result;
	int	nb;
	int	nb2;
	int	i;

	result = 0;
	nb = 0;
	nb2 = 1;
	i = 2;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	while (i <= index)
	{
		result = nb + nb2;
		nb = nb2;
		nb2 = result;
		i++;
	}
	return (result);
}
