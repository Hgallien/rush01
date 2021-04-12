#ifndef RUSH_H
# define RUSH_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_point
{
	int	x;
	int	y;
}				t_point;
typedef struct s_big_tab
{
	int		x;
	int		y;
	char	c;
	int		c_max;
}				t_big_tab;

typedef struct s_var_main
{
	int		t;
	char	c;
	int		max;
	t_point	p;
	int		res;
}				t_var_main;
typedef struct s_couple_max
{
	int	x;
	int	y;
}				t_couple_max;

typedef struct s_var_parse
{
	int	i;
	int	j;
	int	r;
	int	x;
}				t_var_parse;

t_big_tab	**parse(t_var_main *var);
void		print_final(t_big_tab **tab, t_var_main *var);
void		print_tab(int x, t_big_tab **tab, char *str);
void		set_pvar(t_var_parse *var);
int			max(int a, int b);
void		mini_fresh(t_big_tab **tab, t_var_main *var, int i, int j);
int			min(int a, int b);
t_big_tab	**malloc_big_tab(int x);
char		**malloc_tab(int x);
#endif
