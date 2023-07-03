/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:28:30 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/19 16:15:53 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	len;

	if (min >= max)
	{
		arr = NULL;
		return (0);
	}
	len = max - min;
	arr = malloc(sizeof(int) * len);
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
