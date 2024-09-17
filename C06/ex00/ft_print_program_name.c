/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:53:37 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/17 15:15:47 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	char	*program_name;

	i = 0;
	if (ac)
	{
		program_name = av[0];
		while (program_name[i])
		{
			write(1, &program_name[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
