/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:58:00 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/20 17:41:22 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	checkbase(char *base)
{
	int	i;
	int	a;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		a = i + 1;
		if (base[i] == '-' || base[i] == '+' || base[i] == '\t'
			|| base[i] == '\n' || base[i] == '\v' || base[i] == '\f'
			|| base[i] == '\r' || base[i] == ' ')
			return (0);
		while (base[a])
		{
			if (base[a] == base[i])
				return (0);
			a++;
		}
		i++;
	}
	return (1);
}

int	isbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	index_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	negative;

	i = 0;
	nb = 0;
	negative = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			negative *= -1;
	}
	if (!isbase(str[i], base))
		return (0);
	while (isbase(str[i], base))
	{
		nb = nb * ft_strlen(base) + (index_base(str[i], base));
		i++;
	}
	return (nb * negative);
}
