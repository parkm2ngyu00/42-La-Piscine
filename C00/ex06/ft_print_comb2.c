/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:50:51 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/07 18:20:16 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putint(int num, int max)
{
	char	ch_u;
	char	ch_d;

	if (num <= 9)
	{
		ch_u = num + 48;
		ft_putchar2('0', ch_u);
	}
	else if (num <= max)
	{
		ch_u = (num % 10) + 48;
		ch_d = (num / 10) + 48;
		ft_putchar2(ch_d, ch_u);
	}
}

void	ft_catint(int min, int sec)
{
	ft_putint(min, 98);
	write(1, " ", 1);
	ft_putint(sec, 99);
	if (min != 98 || sec != 99)
		ft_putchar2(',', ' ');
}

void	ft_print_comb2(void)
{
	int	m;
	int	s;

	m = 0;
	while (m <= 98)
	{
		s = m + 1;
		while (s <= 99)
		{
			ft_catint(m, s);
			s++;
		}
		m++;
	}
}
