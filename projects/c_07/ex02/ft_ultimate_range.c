/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:02:43 by josanton          #+#    #+#             */
/*   Updated: 2022/02/01 16:02:45 by josanton         ###   ########.fr       */
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
	if (!numbers)
		return (0);
	else
	{
		numbers = (int *)malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			numbers[i] = min;
			min++;
			i++;
		}
	}
	return (numbers);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
