/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:16:35 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/22 18:49:15 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strswap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	size;
	int	i;

	size = 0;
	while (tab[size])
		size++;
	while (size-- > 0)
	{
		i = 0;
		while (i++ < size)
		{
			if (cmp(tab[i - 1], tab[i]) > 0)
				ft_strswap(&tab[i - 1], &tab[i]);
		}
	}
}
