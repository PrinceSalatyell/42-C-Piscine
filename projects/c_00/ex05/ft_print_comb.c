/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 08:56:22 by josanton          #+#    #+#             */
/*   Updated: 2022/01/16 16:28:42 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static char	g_a;
static char	g_b;
static char	g_c;
static char	g_d;

void	c_char_while(void)
{
	while (g_c <= '9')
	{
		if (g_a != g_b && g_a != g_c && g_b != g_c && g_c
			> g_a && g_c > g_b && g_b > g_a)
		{
			write(1, &g_a, 1);
			write(1, &g_b, 1);
			write(1, &g_c, 1);
			if (g_a != '7')
			{
				write(1, ",", 1);
				write(1, &g_d, 1);
			}
		}
		g_c++;
		if (g_c > '9')
		{
			g_b++;
		}
	}
}

void	ft_print_comb(void)
{
	g_a = '0';
	g_b = '1';
	g_c = '2';
	g_d = ' ';
	while (g_a <= '7')
	{
		while (g_b <= '8')
		{
			c_char_while();
			g_c = '2';
			if (g_b > '8')
			{
				g_a++;
			}
		}
		g_b = '1';
	}
}
