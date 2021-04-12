/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 16:44:43 by hgallien          #+#    #+#             */
/*   Updated: 2020/11/26 16:22:44 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	distance(char *str, char charset)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == charset)
			return (i);
		i++;
	}
	return (i);
}

static int	taille(char *str, char charset)
{
	int c;
	int f;
	int f1;
	int i;

	f = 0;
	i = 0;
	c = 0;
	f1 = 1;
	while (str[i])
	{
		f = 0;
		if (str[i++] == charset)
		{
			f = 1;
			f1 = 1;
		}
		if ((f == 0) && (f1 == 1))
		{
			c++;
			f1 = 0;
		}
	}
	return (c + f1);
}

static char	**freeb(int c, char **res)
{
	while (c >= 0)
	{
		free(res[c]);
		c--;
	}
	free(res);
	return (NULL);
}

void		set(int *ts, int *c)
{
	*ts = 0;
	*c = 0;
}

char		**ft_split(char *str, char x)
{
	int		t;
	int		ts;
	char	*temp;
	char	**res;
	int		c;

	if (!(str) || !(res = malloc(sizeof(char*) * (taille(str, x) + 1))))
		return (NULL);
	set(&ts, &c);
	while (str[c])
	{
		if ((t = distance(&str[c], x)) == 0)
			c = c + 1;
		else
		{
			temp = malloc(sizeof(char) * t + 1);
			if (temp == NULL)
				return (freeb(c, res));
			ft_strlcpy(temp, &str[c], t + 1);
			c = c + t;
			res[ts++] = temp;
		}
	}
	res[ts] = NULL;
	return (res);
}
