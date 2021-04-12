/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:51:38 by hgallien          #+#    #+#             */
/*   Updated: 2020/11/27 16:30:51 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int x;

	x = 0;
	while (s[x])
	{
		if (s[x] == (char)c)
		{
			return ((char*)&s[x]);
		}
		x++;
	}
	if (c != '\0')
		return (NULL);
	return ((char*)&s[x]);
}
