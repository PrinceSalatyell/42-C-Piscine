/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 04:59:45 by josanton          #+#    #+#             */
/*   Updated: 2022/01/17 04:59:50 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_max;
char	g_count;
int		g_reset;

void	write_it(char list[9], int g_max)
{
	int	i;
	int	tof;

	i = 0;
	while (i < g_max)
	{
		if ((list[i] != list[i + 1] - 1) || list[g_max] != '9')
		{
			tof = 1;
			break ;
		}
	i++;
	tof = 0;
	}
	write(1, list, g_max + 1);
	if (tof && (list[0] != '8'))
	{
		write(1, ", ", 2);
	}
}

void	change_index(char list[9], int *pIndex, char *pCount)
{
	*pIndex -= 1;
	list[*pIndex - 1]++;
	*pCount -= 1;
}

void	inner_loop(char list[9], int *pIndex, int *pg_Max, char *pCount)
{
	while (list[*pIndex - 1] < list[*pIndex])
	{
		write_it(list, *pg_Max);
		if (list[*pIndex] < *pCount)
			list[*pIndex]++;
		else if (list[*pIndex] == *pCount
			&& list[*pIndex - 1] == list[*pIndex] - 1)
		{
			change_index(list, &*pIndex, &*pCount);
			break ;
		}
		else
		{
			list[*pIndex - 1]++;
			list[*pIndex] = list[*pIndex - 1] + 1;
		}
	}
}

void	operations(char list[9], int index)
{
	g_max = index;
	g_count = '9';
	g_reset = index;
	while (1)
	{
		inner_loop(list, &index, &g_max, &g_count);
		if (list[index - 1] != list[index] - 1)
		{
			g_reset = index - 1;
			while (g_reset <= g_max)
			{
				list[g_reset + 1] = list[g_reset] + 1;
				g_reset++;
			}
			index = g_max;
			g_count = '9';
		}
		if (index == 1 && list[0] + 1 >= list[1])
		{
			if (g_max != 1)
				write_it(list, g_max);
			break ;
		}
	}
}

void	ft_print_combn(int n)
{
	char	array[9];
	int		i;
	int		j;

	if (n == 1)
	{
		write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9", 28);
		return ;
	}
	i = 0;
	j = n - 1;
	array[0] = 0 + '0';
	while (i < j)
	{
		array[i + 1] = (array[i] + 1);
		i++;
	}
	operations(array, j);
}
