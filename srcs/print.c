#include "rush.h"
void	print_final(t_big_tab **tab, t_var_main *var)
{
	int	i;
	int	j;

	i = 0;
	while (i < var->t)
	{
		j = 0;
		while (j < var->t)
		{
			if (i <= var->p.y && i >= (var->p.y - (var->res - 1))
				&& (j <= var->p.x && j >= (var->p.x - (var->res - 1))))
			{
				write(1, &var->c, 1);
			}
			else
			{
				write(1, &tab[i][j].c, 1);
			}
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
