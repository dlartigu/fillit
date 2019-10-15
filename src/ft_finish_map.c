/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finish_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 17:20:22 by dlartigu          #+#    #+#             */
/*   Updated: 2019/06/03 14:02:55 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

t_map	*ft_finish_map(t_map *map, t_tetri **tetri)
{
	int	board_size;

	board_size = ft_board_size(1);
	map = ft_struct_map(board_size);
	map->size = board_size;
	map = ft_back_solve(tetri, 0, map, board_size);
	ft_print_solved(map);
	map = ft_free_board(map);
	return (map);
}
