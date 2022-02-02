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

void	ft_putstr(char c[10], int n)
{
	write(1, c, n);
}

int	check_neg(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		return (147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	int		i;
	int		test;
	int		n;
	char	str[10];

	if (nb < -2147483648 || nb > 2147483647)
		return ;
	i = 0;
	nb = check_neg(nb);
	test = nb;
	while (test != 0)
	{
		i++;
		test = test / 10;
	}
	n = i--;
	while (nb != 0)
	{
		str[i] = (nb % 10) + '0';
		i--;
		nb = nb / 10;
	}
	ft_putstr(str, n);
}

int	main(void)
{
	ft_putnbr(-21474836478);
	return (0);
}
