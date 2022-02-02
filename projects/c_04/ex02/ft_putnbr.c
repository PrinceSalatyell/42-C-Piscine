/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 04:05:31 by josanton          #+#    #+#             */
/*   Updated: 2022/01/27 04:05:35 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		g_y;
int		g_a;
int		g_x;
char	g_c[10];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_howmndgts(int n)
{
	int	x;

	x = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		x++;
	}
	return (x);
}

int	ft_intmin(int nb)
{
	ft_putchar('-');
	ft_putchar('2');
	nb = 147483648;
	return (nb);
}

int	ft_ifneg(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		nb = ft_intmin(nb);
	}
	g_a = 0;
	g_x = ft_howmndgts(nb);
	nb = ft_ifneg(nb);
	g_y = 1;
	while (g_a < g_x)
	{
		g_c[g_x - g_y] = (nb % 10) + '0';
		g_a++;
		g_y++;
		nb = nb / 10;
	}
	g_a = 0;
	while (g_a < g_x)
	{
		ft_putchar(g_c[g_a]);
		g_a++;
	}
}
