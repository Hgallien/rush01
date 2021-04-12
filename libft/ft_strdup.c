/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:32:17 by hgallien          #+#    #+#             */
/*   Updated: 2020/11/26 11:52:55 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *dup;

	dup = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dup == NULL)
	{
		return (dup);
	}
	ft_strlcpy(dup, src, ft_strlen(src) + 1);
	return (dup);
}
