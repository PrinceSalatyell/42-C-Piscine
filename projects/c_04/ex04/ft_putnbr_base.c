/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 13:41:20 by josanton          #+#    #+#             */
/*   Updated: 2022/01/27 13:41:24 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	check_neg(int nb)
{
	long	nbr;

	nbr = (long) nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = (long) nb * -1;
	}
	return (nbr);
}

void	ft_putstr(char c[500], int size)
{
	while (size >= 0)
	{
		write(1, &c[size], 1);
		size--;
	}
}

void	convert(long nb, char *base, int n, int l)
{
	char	arr[500];
	int		x;
	int		i;

	i = 0;
	while (nb != 0 || l == 0)
	{
		x = nb % n;
		arr[i] = base[x];
		i++;
		nb /= n;
		l++;
	}
	ft_putstr(arr, i - 1);
}

int	check_double(char *base, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i])
	{
		while (j < size)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		b_length;
	long	nb;

	i = 0;
	b_length = 0;
	nb = check_neg(nbr);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return ;
		b_length++;
		i++;
	}
	if (b_length < 2 || check_double(base, b_length))
		return ;
	convert(nb, base, b_length, nbr);
}
