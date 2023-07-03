/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 10:56:16 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/22 12:13:52 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	ft_atoi(char *str)
{
	int	c;
	int	sign;
	int	res;

	c = 0;
	sign = 1;
	res = 0;
	while ((str[c] >= 9 && str[c] <= 13) || str[c] == 32)
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			sign *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (str[c] - '0') + (res * 10);
		c++;
	}
	return (res * sign);
}
