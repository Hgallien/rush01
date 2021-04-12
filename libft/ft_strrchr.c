/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:55:01 by hgallien          #+#    #+#             */
/*   Updated: 2020/11/30 09:36:07 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			x;
	const char	*res;

	res = NULL;
	x = 0;
	while (s[x])
	{
		if (s[x] == (char)c)
			res = &s[x];
		x++;
	}
	if (c == '\0')
		return ((char*)&s[x]);
	return ((char*)res);
}
