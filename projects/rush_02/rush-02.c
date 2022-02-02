/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:39:11 by josanton          #+#    #+#             */
/*   Updated: 2022/01/29 23:39:15 by josanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFF_MAX 1024

/*int	check_error(char *file_name)
{
	int		file_dest;
	char	buffer[BUFF_MAX];
	int		i;

	i = 0;
	file_dest = open(file_name, O_RDONLY);
	read(file_dest, buffer, BUFF_MAX);

	while (buffer[i] != '\n')
	{
		while (buffer[i] >= '0' && buffer[i] <= '9')
		{
			if ()
			i++;
		}
		while (buffer[i] == ' ' || buffer[i] == ':')
		{
			i++;
		}
		while (buffer[i] >= 33 && buffer[i] <= 126)
		{
			i++;
		}
	}
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (n == 1)
	{
	    dest[i] = '\0';
	}
	else
	{
    	while (n > i)
    	{
    		dest[i] = '\0';
    		i++;
    	}
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str)
	{
		l++;
		str++;
	}
	return (l);
}

int	ft_init(int n)
{
	int	result;

	if (n <= 3 && n / 3 <= 1)
		result = 1;
	else if (n <= 6 && n / 3 <= 2)
		result = 2;
	else if (n <= 9 && n / 3 <= 3)
		result = 3;
	else if (n <= 12 && n / 3 <= 4)
		result = 4;
	else if (n <= 15 && n / 3 <= 5)
		result = 5;
	else if (n <= 18 && n / 3 <= 6)
		result = 6;
	else if (n <= 21 && n / 3 <= 7)
		result = 7;
	else if (n <= 24 && n / 3 <= 8)
		result = 8;
	else if (n <= 27 && n / 3 <= 9)
		result = 9;
	else if (n <= 30 && n / 3 <= 10)
		result = 10;
	else if (n <= 33 && n / 3 <= 11)
		result = 11;
	else if (n <= 36 && n / 3 <= 12)
		result = 12;
	else
		result = 13;
	return (result);
}

int	ft_determine_word(int cntrl, char *to_print, char *buffer)
{
	int		x;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 1;
	k = 0;
	x = 3 * (cntrl - 1);
	while (buffer[i])
	{
		while (buffer[i] == '1' && buffer[i + j] == '0')
		{
			if (j == x)
			{
				i += x;
				i++;
				while (buffer[i] == ' ' || buffer[i] == ':')
					i++;
				while (buffer[i] != '\n')
				{
					to_print[k] = buffer[i];
					i++;
					k++;
				}
				return (k + 1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

char	*nums_to_send(char *number, char *to_send, int *num_of_digs)
{
	int	i;

	i = 0;
	if (*num_of_digs % 3 == 0)
	{
		while (i < 3)
		{
			to_send[i] = *number;
			number++;
			*num_of_digs = *num_of_digs - 1;
			i++;
		}
	}
	else if ((*num_of_digs - 2) % 3 == 0)
	{
		while (i < 2)
		{
			to_send[i] = *number;
			number++;
			*num_of_digs = *num_of_digs - 1;
			i++;
		}
	}
	else
	{
		to_send[i] = *number;
		number++;
		*num_of_digs = *num_of_digs - 1;
	}
	return (number);
}

void	ft_print_tens(char *number, char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == number[0] && buffer[i + 1] == number[1])
		{
			i += 2;
			while (buffer[i] == ' ' || buffer[i] == ':')
				i++;
			while (buffer[i] != '\n')
			{
				write(1, &buffer[i], 1);
				i++;
				if (buffer[i] == '\n')
					return ;
			}
		}
		i++;
	}
}

void	ft_print_hundreds(char *number, char *buffer)
{
	int		i;
	int		j;
	int		size;
	char	num[1];

	size = ft_strlen(number);
	i = 0;
	j = 0;
	if (size == 1)
	{
		while (buffer[i])
		{
			if (buffer[i] == number[0])
			{
				i++;
				while (buffer[i] == ' ' || buffer[i] == ':')
					i++;
				if (size == 1 && number[0] == '0')
					return ;
				while (buffer[i] != '\n' && number[0] != '0')
				{
					write(1, &buffer[i], 1);
					i++;
					if (buffer[i] == '\n')
					{
						write(1, " ", 1);
						return ;
					}
				}
			}
			i++;
		}
	}
	else if (size == 2)
	{
		if (number[0] == '1')
		{
			ft_print_tens(number, buffer);
			return ;
		}
		else if (number[0] == '0')
		{
			ft_print_hundreds(++number, buffer);
		}
		else
		{
			while (buffer[i])
			{
				if (buffer[i] == number[0] && buffer[i + 1] == '0')
				{
					i += 2;
					while (buffer[i] == ' ' || buffer[i] == ':')
						i++;
					while (buffer[i] != '\n')
					{
						write(1, &buffer[i], 1);
						i++;
						if (buffer[i] == '\n')
						{
							write(1, "-", 1);
							ft_print_hundreds(++number, buffer);
							return ;
						}	
					}
				}
				i++;
			}
		}
	}
	else
	{
		if (number[0] == '0')
			ft_print_hundreds(++number, buffer);
		else
		{
			ft_strncpy(num, number, 1);
			ft_print_hundreds(num, buffer);
			while (buffer[i])
			{
				if (buffer[i] == '1' && buffer[i + 1] == '0' && buffer[i + 2] == '0')
				{
					i += 3;
					while (buffer[i] == ' ' || buffer[i] == ':')
						i++;
					while (buffer[i] != '\n')
					{
						write(1, &buffer[i], 1);
						i++;
						if (buffer[i] == '\n')
						{
							write(1, " ", 2);
							ft_print_hundreds(++number, buffer);
							return ;
						}
					}
				}
				i++;
			}
		}
	}
}

void	ft_print_worded_number(char *number, int cntrl, int num_of_digs, char *file_name)
{
	int		file_dest;
	char	buffer[BUFF_MAX];
	int		j;
	char	*to_print = malloc(30);
	char	*to_send = malloc(5);
	int		tof;
	int		i;

	i = 0;
	tof = 0;
	file_dest = open(file_name, O_RDONLY);
	read(file_dest, buffer, BUFF_MAX);
	j = ft_determine_word(cntrl, to_print, buffer);
	if (cntrl == 1)
	{
		ft_print_hundreds(number, buffer);
		return ;
	}
	else
	{
		number = nums_to_send(number, to_send, &num_of_digs);
		ft_print_hundreds(to_send, buffer);
		if (j != 0)
		{
			write(1, to_print, j);
			write(1, ", ", 2);
		}
		while (number[i])
		{
			if (number[i] != '0')
				tof = 1;
			i++;
		}
		if (tof)
			ft_print_worded_number(number, --cntrl, num_of_digs, file_name);
		else
			return;
	}
	free(to_print);
	free(to_send);
	close(file_dest);
}

int	main(int n, char **arr)
{
	int		num_of_digs;
	char	error[6];
	int		cntrl;
	char	file_name[30];

	ft_strcpy(file_name, "survy_lex.txt");
	cntrl = 0;
	num_of_digs = 0;
	ft_strcpy(error, "Error\n");
	if (n != 2 && n != 3)
	{
		write(1, error, 6);
		return (0);
	}
	else if (n == 2)
	{
		num_of_digs = ft_strlen(arr[1]);
		cntrl = ft_init(num_of_digs);
		ft_print_worded_number(arr[1], cntrl, num_of_digs, file_name);
	}
	else
	{
		ft_strcpy(file_name, arr[1]);
		num_of_digs = ft_strlen(arr[2]);
		cntrl = ft_init(num_of_digs);
		ft_print_worded_number(arr[2], cntrl, num_of_digs, file_name);
	}
	return (0);
}
