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

#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	*m;
	int	i;

	if (min >= max)
		return (0);
	m = (int *)malloc(sizeof(int) * (max - min));
	if (!m)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		m[i] = min + i;
		i++;
	}
	return (m);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
