/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingypar <mingypar@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:27:56 by mingypar          #+#    #+#             */
/*   Updated: 2022/02/09 15:11:35 by mingypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	temp;

	i = 0;
	temp = ft_strlen(src);
	if (n != 0)
	{
		while (i < temp && i + 1 < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
		return (temp);
	dest[i] = '\0';
	return (temp);
}
