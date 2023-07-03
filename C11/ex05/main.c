/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:29:28 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/22 18:46:15 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	main(int argc, char *argv[])
{
	int	n;

	n = 0;
	if (argc != 4)
		return (1);
	while (argv[2][n])
		n++;
	if ((argv[2][0] == '+' || argv[2][0] == '-'
		|| argv[2][0] == '/' || argv[2][0] == '*'
		|| argv[2][0] == '%') && n == 1)
	{
		ft_calc(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]));
	}
	else
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
