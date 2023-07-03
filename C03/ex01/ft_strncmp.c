/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 08:42:51 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/10 09:06:02 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char			c1;
	char			c2;
	unsigned int	i;

	i = 0;
	while (1)
	{
		c1 = *s1++;
		c2 = *s2++;
		if ((c1 != c2) && i < n)
		{
			return (c1 - c2);
		}
		if (!c1)
			break ;
		i++;
	}
	return (0);
}
