/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:14:07 by hgallien          #+#    #+#             */
/*   Updated: 2020/11/26 10:31:48 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test(const char *str, const char *to_find, int i, int j)
{
	if (str[i] == to_find[j])
	{
		j++;
	}
	else
	{
		j = 0;
	}
	return (j);
}

char		*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return ((char*)str);
	while (str[i] != '\0' && i < len)
	{
		j = test(str, to_find, i, j);
		if (j == 0)
		{
			j = test(str, to_find, i, j);
		}
		if (j == ft_strlen(to_find))
		{
			return ((char*)&str[i - ft_strlen(to_find) + 1]);
		}
		i++;
	}
	if (j == ft_strlen(to_find))
	{
		return ((char*)&str[i - ft_strlen(to_find)]);
	}
	return (NULL);
}
