/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 08:06:45 by hgallien          #+#    #+#             */
/*   Updated: 2020/11/25 13:04:04 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				j;
	unsigned int	t;

	if (ft_strlen(dest) > n)
	{
		t = n + ft_strlen(src);
	}
	else
	{
		t = ft_strlen(dest) + ft_strlen(src);
	}
	if (n > 0)
	{
		i = ft_strlen(dest);
		j = 0;
		while ((src[j] != '\0') && (i < n - 1))
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (t);
}
