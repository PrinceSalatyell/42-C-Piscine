/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 06:50:16 by josanton          #+#    #+#             */
/*   Updated: 2022/02/01 06:50:19 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s2++;
		s1++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int n, char **args)
{
	char	new_line;
	int		i;

	i = 1;
	while (i < n - 1)
	{
		if (ft_strcmp(args[i], args[i + 1]) > 0)
		{
			ft_swap(&args[i], &args[i + 1]);
			i = 1;
			continue ;
		}
		i++;
	}
	new_line = '\n';
	i = 1;
	while (i < n)
	{
		ft_putstr(args[i]);
		write(1, &new_line, 1);
		i++;
	}
	return (0);

}
