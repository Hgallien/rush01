/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 18:35:07 by hgallien          #+#    #+#             */
/*   Updated: 2021/04/11 18:35:50 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	get_taille_char(char *buff, t_var_main *var, t_var_parse *pvar)
{
	var->t = 0;
	pvar->r = read(0, buff, 1);
	while (buff[0] != '\n' && pvar->r != 0)
	{
		var->t = var->t *10;
		var->t = var->t + buff[0] - '0';
		read(0, buff, 1);
	}
	pvar->r = read(0, buff, 2);
	var->c = buff[0];
}

void	both_condition(t_var_parse *pvar, t_var_main *var, t_big_tab **res)
{
	if (pvar->x % var->t != 0 && res[pvar->x / var->t][(pvar->x % var->t)
		- 1].c == res[pvar->x / var->t][pvar->x % var->t].c)
		res[pvar->x / var->t][pvar->x % var->t].x
			= res[pvar->x / var->t][pvar->x % var->t].x
			+ res[pvar->x / var->t][(pvar->x % var->t) - 1].x;
	if (pvar->x >= var->t && res[((pvar->x - var->t) / var->t)][pvar->x
		% var->t].c == res[pvar->x / var->t][pvar->x % var->t].c)
		res[pvar->x / var->t][pvar->x % var->t].y = res[pvar->x
			/ var->t][pvar->x % var->t].y + res[(pvar->x - var->t)
			/ var->t][(pvar->x % var->t)].y;
}

void	set_pvar(t_var_parse *var)
{
	var->x = 0;
	var->r = 1;
}

t_big_tab	**parse(t_var_main *var)
{
	t_var_parse		pvar;
	char			buff[4080];
	t_big_tab		**res;

	set_pvar(&pvar);
	get_taille_char(buff, var, &pvar);
	res = malloc_big_tab(var->t);
	while (pvar.r)
	{
		pvar.i =0;
		pvar.r = read(0, buff, 4080);
		while (pvar.i < pvar.r)
		{
			if (buff[pvar.i] == '\n')
				pvar.i++;
			else
			{
				res[pvar.x / var->t][pvar.x % var->t].c = buff[pvar.i];
				mini_fresh(res, var, pvar.x / var->t, pvar.x % var->t);
				pvar.x++;
				pvar.i++;
			}
		}
	}
	return (res);
}
