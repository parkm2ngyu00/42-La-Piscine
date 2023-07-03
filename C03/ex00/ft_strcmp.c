/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 08:42:39 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/10 09:05:12 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	char	c1;
	char	c2;

	while (1)
	{
		c1 = *s1++;
		c2 = *s2++;
		if (c1 != c2)
		{	
			return (c1 - c2);
		}
		if (!c1)
			break ;
	}
	return (0);
}