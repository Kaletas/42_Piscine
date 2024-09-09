/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:25:12 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/09 19:41:40 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	f_digit;
	int	s_digit;
	int	t_digit;

	f_digit = '0';
	while (f_digit <= '7')
	{
		s_digit = f_digit + 1;
		while (s_digit <= '8')
		{
			t_digit = s_digit + 1;
			while (t_digit <= '9')
			{
				write(1, &f_digit, 1);
				write(1, &s_digit, 1);
				write(1, &t_digit, 1);
				if (f_digit != '7' || s_digit != '8' || t_digit != '9')
					write(1, ", ", 2);
				t_digit++;
			}
			s_digit++;
		}
		f_digit++;
	}
}

//This is for test purpose only
// int	main(void)
// {
// 	ft_print_comb();
// }
