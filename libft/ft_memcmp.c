/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:57:07 by hgallien          #+#    #+#             */
/*   Updated: 2020/11/25 13:20:18 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t x;

	x = 0;
	while (x < n)
	{
		if (((unsigned char *)s1)[x] != ((unsigned char *)s2)[x])
			return ((unsigned char *)s1)[x] - ((unsigned char *)s2)[x];
		x++;
	}
	if (x == n)
		return (0);
	return ((unsigned char *)s1)[x] - ((unsigned char *)s2)[x];
}
