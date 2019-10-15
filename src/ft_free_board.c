/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:39:23 by dlartigu          #+#    #+#             */
/*   Updated: 2019/06/03 13:16:46 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

t_map	*ft_free_board(t_map *map)
{
	int i;

	i = 0;
	while (i <= map->size)
	{
		ft_memdel((void **)&(map)->board[i]);
		i++;
	}
	ft_memdel((void **)&(map)->board);
	ft_memdel((void **)&(map));
	return (map);
}
