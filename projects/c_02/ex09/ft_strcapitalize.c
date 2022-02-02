/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 06:46:08 by josanton          #+#    #+#             */
/*   Updated: 2022/01/24 06:46:49 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		str[i] -= 32;
	while (str[i])
	{
		if (((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z')
				&& (str[i] < '0' || str[i] > '9'))
			&& (str[i + 1] >= 'A' && str[i + 1] <= 'Z'))
		{
			i++;
			continue ;
		}
		else if (((str[i] < 'a' || str[i] > 'z')
				&& (str[i] < 'A' || str[i] > 'Z')
				&& (str[i] < '0' || str[i] > '9'))
			&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		else if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
			str[i + 1] += 32;
		i++;
	}
	return (str);
}
