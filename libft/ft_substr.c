/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 08:50:31 by hgallien          #+#    #+#             */
/*   Updated: 2020/11/26 15:22:52 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	x;

	x = 0;
	res = malloc(len + 1);
	if (s == NULL || len == 0)
	{
		res[0] = 0;
		return (res);
	}
	if (start > (ft_strlen(s)))
	{
		res[0] = 0;
		return (res);
	}
	if (res == NULL)
		return (res);
	while (s[start] && x < len)
	{
		res[x] = s[start];
		start++;
		x++;
	}
	res[x] = '\0';
	return (res);
}
