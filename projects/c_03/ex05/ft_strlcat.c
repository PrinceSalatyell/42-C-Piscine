/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:11:50 by josanton          #+#    #+#             */
/*   Updated: 2022/01/25 18:11:52 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_len(char *dest)
{
	unsigned int	c;

	c = 0;
	while (dest[c] != '\0')
		c++;
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*a;
	char			*s;
	unsigned int	a_len;
	unsigned int	r

	a = dest;
	
}
