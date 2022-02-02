/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:24:39 by josanton          #+#    #+#             */
/*   Updated: 2022/02/01 15:24:44 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*numbers;
	int	i;

	i = 0;
	if (min >= max)
	{
		numbers = NULL;
		return (numbers);
	}
	else
	{
		numbers = malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			numbers[i] = min;
			min++;
			i++;
		}
	}
	return (numbers);
}
