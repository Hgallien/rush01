/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 18:35:14 by hgallien          #+#    #+#             */
/*   Updated: 2021/04/11 18:35:17 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

t_big_tab 	**malloc_big_tab(int x)
{
	int			i;
	int			j;
	t_big_tab	**res;

	i = 0;
	res = malloc(sizeof(t_big_tab *) * x);
	while (i < x)
	{
		j = 0;
		res[i] = malloc(sizeof(t_big_tab) * x);
		while (j < x)
		{
			res[i][j].x = 1;
			res[i][j].y = 1;
			j++;
		}
		i++;
	}
	return (res);
}

char 	**malloc_tab(int x)
{
	int		i;
	char	**res;

	i = 0;
	res = malloc(sizeof(char *) * x);
	while (i < x)
	{
		res[i] = malloc(x);
		i++;
	}
	return (res);
}
