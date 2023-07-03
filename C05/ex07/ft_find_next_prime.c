/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:23:25 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/16 10:16:37 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	_ft_is_prime(int nb)
{
	int	n;

	n = 3;
	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (n * n <= nb)
	{
		if (nb % n == 0)
			return (0);
		n += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !_ft_is_prime(nb))
		nb++;
	return (nb);
}
