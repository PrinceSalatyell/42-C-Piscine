/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 06:23:08 by josanton          #+#    #+#             */
/*   Updated: 2022/02/01 06:23:12 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int n, char **args)
{
	int	i;
	int	j;

	if (n == 0)
		return (0);
	i = 1;
	j = 0;
	while (args[i])
	{
		while (args[i][j])
		{
			write(1, &args[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
	return (0);
}
