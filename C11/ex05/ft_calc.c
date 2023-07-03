/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:25:49 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/22 18:38:28 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void	ft_calc(int a, char sep, int b)
{
	long long	result;

	result = 0;
	if (sep == '+')
		result = (a + b);
	else if (sep == '-')
		result = (a - b);
	else if (sep == '*')
		result = (a * b);
	else if (sep == '/')
	{
		if (b == 0)
			return (ft_putstr("Stop : division by zero\n"));
		result = (a / b);
	}
	else if (sep == '%')
	{
		if (b == 0)
			return (ft_putstr("Stop : modulo by zero\n"));
		result = (a % b);
	}
	ft_putnbr(result);
	ft_putchar('\n');
}
