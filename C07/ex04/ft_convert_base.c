/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:57:55 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/20 17:31:21 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *s);
int				checkbase(char *base);
int				isbase(char c, char *base);
int				index_base(char c, char *base);
int				ft_atoi_base(char *str, char *base);

unsigned int	count_nbr(unsigned int i, char *base)
{
	unsigned int	num;

	num = 0;
	while (i >= ft_strlen(base))
	{
		i = i / ft_strlen(base);
		num++;
	}
	return (num + 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	nb;
	int				num;
	char			*res;
	int				i;

	if (!checkbase(base_from) || !checkbase(base_to))
		return (0);
	num = ft_atoi_base(nbr, base_from);
	if (num < 0)
		nb = -num;
	else
		nb = num;
	i = count_nbr(nb, base_to);
	if (num < 0)
		i++;
	res = malloc(sizeof(char) * (i + 1));
	res[i] = 0;
	while (i--)
	{
		res[i] = base_to[nb % ft_strlen(base_to)];
		nb = nb / ft_strlen(base_to);
	}
	if (num < 0)
		res[0] = '-';
	return (res);
}
