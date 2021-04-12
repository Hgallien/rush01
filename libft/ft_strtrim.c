/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 08:55:33 by hgallien          #+#    #+#             */
/*   Updated: 2020/11/30 09:35:00 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test(char c, char const *set)
{
	int x;

	x = 0;
	while (set[x])
	{
		if (c == set[x])
			return (1);
		x++;
	}
	return (0);
}

static char	*setn(char const *s1)
{
	char *res;

	res = malloc(ft_strlen(s1));
	if (res == NULL)
		return (res);
	ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	return (res);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		x;
	int		y;
	int		i;
	char	*res;

	i = 0;
	x = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	y = ft_strlen(s1) - 1;
	if (set[0] == '\0')
		return (setn(s1));
	while (x <= y && test(s1[x], set))
		x++;
	while (y >= x && test(s1[y], set))
		y--;
	res = malloc(y - x + 2);
	if (res == NULL)
		return (res);
	while (x <= y)
		res[i++] = s1[x++];
	res[i] = '\0';
	return (res);
}
