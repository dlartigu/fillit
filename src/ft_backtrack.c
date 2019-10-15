/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:23:35 by dlartigu          #+#    #+#             */
/*   Updated: 2019/06/06 14:36:40 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int		ft_check_place(int i, int j, t_tetri *tetri, t_map *map)
{
	int diez;
	int h;

	diez = 0;
	h = 0;
	while (h < 4)
	{
		if (map->board[tetri->pos[h][0] + i][tetri->pos[h][1] + j] == '.')
			diez++;
		h++;
	}
	if (diez == 4)
		return (1);
	return (0);
}

void	ft_place(int i, int j, t_tetri *tetri, t_map *map)
{
	int h;

	h = 0;
	while (h < 4)
	{
		map->board[tetri->pos[h][0] + i][tetri->pos[h][1] + j] = tetri->letter;
		h++;
	}
}

int		ft_solved(int i, int j, t_tetri *tetri, t_map *map)
{
	if (ft_check_place(i, j, tetri, map))
	{
		ft_place(i, j, tetri, map);
		return (1);
	}
	return (0);
}

void	ft_delete_tetri(int i, int j, t_tetri *tetri, t_map *map)
{
	int h;

	h = 0;
	while (h < 4)
	{
		if (map->board[tetri->pos[h][0] + i][tetri->pos[h][1] + j]
				== tetri->letter)
			map->board[tetri->pos[h][0] + i][tetri->pos[h][1] + j] = '.';
		h++;
	}
}

int		ft_backtrack(t_tetri **tetri, int index, t_map *map)
{
	int i;
	int j;

	if (!tetri[index])
		return (1);
	i = 0;
	while (i <= (map->size - tetri[index]->hight))
	{
		j = 0;
		while (j <= (map->size - tetri[index]->width))
		{
			if (ft_solved(i, j, tetri[index], map))
			{
				if (ft_backtrack(tetri, index + 1, map))
					return (1);
				else
					ft_delete_tetri(i, j, tetri[index], map);
			}
			j++;
		}
		i++;
	}
	return (0);
}
