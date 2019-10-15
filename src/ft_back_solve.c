/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_back_solve.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 17:10:23 by dlartigu          #+#    #+#             */
/*   Updated: 2019/06/06 14:14:11 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

t_map	*ft_back_solve(t_tetri **tetri, int index, t_map *map, int board_size)
{
	index = 0;
	while (ft_backtrack(tetri, index, map) != 1)
	{
		board_size = map->size;
		map = ft_free_board(map);
		map = ft_struct_map(board_size + 1);
		map->size = board_size + 1;
		index = 0;
	}
	return (map);
}
