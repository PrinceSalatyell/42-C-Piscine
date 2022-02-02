/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:06:48 by josanton          #+#    #+#             */
/*   Updated: 2022/01/25 18:06:55 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		g_i;
int		g_j;
int		g_x;
char	*g_rtrn;

void	smt(void)
{
	g_i = 0;
	g_j = 0;
}

char	*ft_strstr(char *str, char *to_find)
{
	smt();
	if (to_find[0] == 0)
		return (str);
	while (str[g_i])
	{
		if (str[g_i] == to_find[g_j])
		{
			if (g_j == 0)
			{
				g_x = g_i;
				g_rtrn = &str[g_i];
			}
			if (to_find[g_j + 1] == '\0')
				return (g_rtrn);
			else if (to_find[g_j + 1] != str[g_i + 1])
			{
				g_i = g_x + 1;
				g_j = 0;
				continue ;
			}
			g_j++;
		}
		g_i++;
	}
	return (0);
}
