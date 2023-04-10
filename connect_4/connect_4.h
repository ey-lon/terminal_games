#ifndef CONNECT_4_H
# define CONNECT_4_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <time.h>
# include "../Libft/libft.h"
# include "../utils/utils.h"

//PLAYERS-------------------------------
# define P1 1
# define P2 2
# define CPU 3
//MARKS---------------------------------
//# define P1C '🔴'
//# define P2C '🔵'
# define P1C 'X'
# define P2C 'O'
# define FREE ' '
//GRID_LIMITS---------------------------
# define GRID_MIN 1
# define GRID_MAX 25

typedef struct s_opt
{
	int 	grid_width;
	int		grid_height;
	int		max_marks;
	char	*p1_col;
	char	*p2_col;
}	t_opt;

typedef struct s_game
{
	t_opt	*opt;
	char	**mat;
	int		player2;
	int		status;
	int		turn;
}	t_game;

//MAIN------------------------------------
int		ft_c4_pvp(t_opt opt);
int		ft_c4_pve(t_opt opt);
//RULES-----------------------------------
void	ft_c4_rules(t_opt opt);
//OPTIONS---------------------------------
void	ft_c4_options(t_opt *opt);
//movement--------------------------------
int		ft_c4_move(char **mat, int square, int player_who_moved);
//CPU-------------------------------------
int		ft_c4_cpu_move(char **mat, int size);
//status_update---------------------------
char	ft_c4_win_check(char **mat, int max_marks);
int		ft_c4_status_update(t_game *game, int player_who_moved);
//print_mat-------------------------------
void	ft_c4_print_mat(char **mat, t_opt *opt);

#endif