/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:35:37 by bcarreir          #+#    #+#             */
/*   Updated: 2022/01/16 17:36:02 by bcarreir         ###   ########.fr       */
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
			if ((i == 0 && j == 0)
				|| (i == y - 1 && j == x - 1 && y != 1 && x != 1))
				ft_putchar('A');
			else if ((j == x - 1 && i == 0) || (j == 0 && i == y - 1))
				ft_putchar('C');
			else if (j == 0 || j == x - 1 || i == 0 || i == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
