/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:15:10 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/13 11:16:31 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if ((nb == 0 && power == 0) || (power == 0))
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
