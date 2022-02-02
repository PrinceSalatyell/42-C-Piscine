/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 06:46:08 by josanton          #+#    #+#             */
/*   Updated: 2022/01/25 01:28:04 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_unprintable(char c)
{
	char	a;
	char	b;
	char	*base;
	int		x;
	int		y;

	a = c / 16;
	b = c % 16;
	x = a;
	y = b;
	base = "0123456789abcdef";
	ft_putchar(base[x]);
	ft_putchar(base[y]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 31) || str[i] == 127)
		{
			ft_putchar('\\');
			ft_unprintable(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
