/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:10:26 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/22 18:34:09 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	n;
	int	*arr;

	arr = malloc(sizeof(int) * length);
	if (!arr)
		return (0);
	n = 0;
	while (n < length)
	{
		arr[n] = f(tab[n]);
		n++;
	}
	return (arr);
}
