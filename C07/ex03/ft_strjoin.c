/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:50:27 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/20 17:43:48 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	_ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += _ft_str_length(strings[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

void	make_join(int size, char **strs, char *sep, char *read_head)
{
	int	index;

	index = 0;
	while (index < size)
	{
		ft_strcpy(read_head, strs[index]);
		read_head += _ft_str_length(strs[index]);
		if (index < size - 1)
		{
			ft_strcpy(read_head, sep);
			read_head += _ft_str_length(sep);
		}
		index++;
	}
	*read_head = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	char	*string;

	if (size == 0)
	{
		string = (char *)malloc(sizeof(char));
		string[0] = '\0';
		return (string);
	}
	full_length = ft_length(strs, size, _ft_str_length(sep));
	string = (char *)malloc((full_length + 1) * sizeof(char));
	if (!string)
		return (0);
	make_join(size, strs, sep, string);
	return (string);
}
