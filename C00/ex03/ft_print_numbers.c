/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 00:07:46 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/09 19:18:32 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	number;
	int		i;

	number = '0';
	i = 0;
	while (i < 10)
	{
		write(1, &number, 1);
		number++;
		i++;
	}
}

//This is for test purpose only
/*int	main(void)
{
	ft_print_numbers();
} */
