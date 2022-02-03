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
