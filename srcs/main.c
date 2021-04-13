/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 18:35:25 by hgallien          #+#    #+#             */
/*   Updated: 2021/04/11 18:35:28 by hgallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	in_refresh_tab(t_big_tab **tab, int i, int j)
{
	if (tab[i][j].c != tab[i - 1][j].c || tab[i][j - 1].c != tab[i][j].c)
		tab[i][j].c_max = 1;
	else
	{
		tab[i][j].c_max = min(tab[i - 1][j].c_max, tab[i][j - 1].c_max);
		if (tab[i - tab[i][j].c_max][j - tab[i][j].c_max].c == tab[i][j].c)
			tab[i][j].c_max = tab[i][j].c_max + 1;
	}
}

void	mini_fresh(t_big_tab **tab, t_var_main *var, int i, int j)
{
	if (j == 0 || i == 0)
		tab[i][j].c_max = 1;
	else
		in_refresh_tab(tab, i, j);
	if (tab[i][j].c_max > var->res)
	{
		var->p.x = j;
		var->p.y = i;
		var->res = tab[i][j].c_max;
	}
}

void	refresh_tab_v2(t_big_tab **tab, t_var_main *var)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (++i < var->t)
	{
		j = 0;
		while (j < var ->t)
		{
			if (j == 0 || i == 0)
				tab[i][j].c_max = 1;
			else
				in_refresh_tab(tab, i, j);
			if (tab[i][j].c_max > var->res)
			{
				var->p.x = j;
				var->p.y = i;
				var->res = tab[i][j].c_max;
			}
			j++;
		}
	}
}

void	free_biggi(t_big_tab **tab, t_var_main *var)
{
	int	i;

	i = 0;
	while (i < var->t)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	main(void)
{
	t_big_tab	**tab;
	t_var_main	var;

	var.res = 0;
	tab = parse(&var);
	print_final(tab, &var);
	free_biggi(tab, &var);
}
