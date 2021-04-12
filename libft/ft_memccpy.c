/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:28:20 by hgallien          #+#    #+#             */
/*   Updated: 2020/11/26 15:18:44 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
		if (((unsigned char *)src)[x] == (unsigned char)c)
			return (&dst[x + 1]);
		x++;
	}
	return (NULL);
}
