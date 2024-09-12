/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaleta <bkaleta@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 00:14:43 by bkaleta           #+#    #+#             */
/*   Updated: 2024/09/12 13:10:12 by bkaleta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);
int		ft_str_is_printable(char letter);
void	ft_putchar_hexa(char letter);

void	ft_putchar_hexa(char letter)
{
	char	*hex;
	char	hex_output[2];

	hex = "0123456789abcdef";
	hex_output[0] = hex[letter / 16];
	hex_output[1] = hex[letter % 16];
	write(1, hex_output, 2);
}

int	ft_str_is_printable(char letter)
{
	if (letter >= 32 && letter <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_printable(str[i]) == 0)
		{
			write(1, "\\", 1);
			ft_putchar_hexa(str[i]);
		}
		else if (ft_str_is_printable(str[i]) == 1)
			write(1, &str[i], 1);
		i++;
	}
}
