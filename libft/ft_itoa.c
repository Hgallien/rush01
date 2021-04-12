/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 09:04:32 by hgallien          #+#    #+#             */
/*   Updated: 2020/11/26 15:08:15 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbzero(int n)
{
	int x;

	x = 0;
	if (n < 0)
		x++;
	if (n == 0)
		x++;
	while (n != 0)
	{
		x++;
		n = n / 10;
	}
	return (x);
}

char		*ft_itoa(int n)
{
	int			c;
	char		*res;
	long int	ln;

	ln = n;
	c = nbzero(ln);
	res = malloc(c + 1);
	if (!(res))
		return (NULL);
	res[c] = '\0';
	if (res == NULL)
		return (res);
	if (ln < 0)
	{
		res[0] = '-';
		ln = ln * -1;
	}
	while (ln != 0)
	{
		res[c-- - 1] = '0' + (ln % 10);
		ln = ln / 10;
	}
	if (n == 0)
		res[0] = '0';
	return (res);
}
