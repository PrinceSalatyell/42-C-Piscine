/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:08:39 by bcarreir          #+#    #+#             */
/*   Updated: 2022/01/16 16:20:26 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char g_c);

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((j == 0 && (i == 0 || i == y - 1))
				|| (j == x - 1 && (i == 0 || i == y - 1)))
				ft_putchar('o');
			else if (i == 0 || i == y - 1)
				ft_putchar('-');
			else if (j == 0 || j == x -1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
