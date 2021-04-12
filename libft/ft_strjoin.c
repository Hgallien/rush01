/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 08:14:17 by hgallien          #+#    #+#             */
/*   Updated: 2020/11/26 15:22:10 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		t;

	t = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1)
		t = t + ft_strlen(s1);
	if (s2)
		t = t + ft_strlen(s2);
	res = malloc(t);
	if (!(res))
		return (NULL);
	res[0] = '\0';
	if (s1)
		ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	if (s2)
		ft_strlcat(res, (char*)s2, ft_strlen(s2) + ft_strlen(res) + 1);
	return (res);
}
