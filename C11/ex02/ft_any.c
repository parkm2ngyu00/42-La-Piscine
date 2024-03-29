/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:28:54 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/22 18:34:48 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int(*f)(char *))
{
	int	n;

	n = 0;
	while (tab[n])
	{
		if ((*f)(tab[n++]))
			return (1);
	}
	return (0);
}
