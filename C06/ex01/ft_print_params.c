/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:54:02 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/17 15:32:21 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac >= 2)
	{
		while (av[i][j])
		{
			j = 0;
			while (av[i][j])
			{
				write(1, &av[i][j], 1);
				j++;
			}
			i++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
