/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:49:47 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/19 16:03:03 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*_ft_range(int min, int max)
{
	int	*arr;
	int	i;

	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (0);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = _ft_range(min, max);
	if (!*range)
		return (-1);
	return (max - min);
}
