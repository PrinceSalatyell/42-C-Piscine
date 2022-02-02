/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:34:51 by josanton          #+#    #+#             */
/*   Updated: 2022/01/31 21:34:55 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 2147483647)
		return (0);
	result = 1;
	while (nb != 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
