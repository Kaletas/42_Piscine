/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:54:20 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/17 16:01:12 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	end;
	int	i;

	end = ac;
	while (end >= 1)
	{
		i = 0;
		while (av[end][i])
		{
			write(1, &av[end][i], 1);
			i++;
		}
		end--;
	}
}
