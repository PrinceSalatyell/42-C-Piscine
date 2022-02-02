/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 06:41:02 by josanton          #+#    #+#             */
/*   Updated: 2022/01/27 06:41:07 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	odd_or_even;
	int	number;

	i = 0;
	odd_or_even = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if ((str[i] != '+' && str[i] != '-') && (str[i] < '0' || str[i] > '9'))
		return (0);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			odd_or_even *= -1;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10 + (str[i] - 48));
		i++;
	}
	return (number * odd_or_even);
}
