/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 13:30:18 by dlartigu          #+#    #+#             */
/*   Updated: 2019/06/04 10:31:34 by jcharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "../libft/libft.h"
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>

# define TRUE 0
# define FALSE 1

typedef struct			s_tetris
{
	char			letter;
	int				index;
	int				hight;
	int				width;
	int				pos[4][2];
}						t_tetri;

typedef	struct			s_map
{
	char			**board;
	int				size;
}						t_map;

char					**ft_read(int fd);
void					ft_free_tab(char **tab);
void					ft_free_tetri(t_tetri **tetri);

int						ft_sqrt(int n);
int						ft_board_size(int tetris);

t_map					*ft_struct_map(int size);
t_map					*ft_free_board(t_map *map);

int						ft_check_valid(char *str);
int						ft_check_link(char *str);

int						ft_error();

char					*ft_hight(char *str);
char					*ft_width(char *str);
char					*ft_disp(char *str);

t_tetri					*ft_struct_main(char *str, int index, t_tetri *tetri);
t_tetri					*ft_struct_hight(char *str, t_tetri *tetri);
t_tetri					*ft_struct_width(char *str, t_tetri *tetri);
t_tetri					*ft_struct_pos(char *str, int x, int y, t_tetri *tetri);

int						ft_backtrack(t_tetri **tetri, int index, t_map *map);
t_map					*ft_back_solve(t_tetri **tetri, int index, t_map *map,
							int board_size);
t_map					*ft_finish_map(t_map *map, t_tetri **tetri);

void					ft_print_solved(t_map *map);
char					**ft_parser(char **tab);
t_tetri					**ft_tetri_parser(char **tab, t_tetri **tetri);

#endif
