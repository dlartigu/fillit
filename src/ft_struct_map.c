/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 17:07:34 by dlartigu          #+#    #+#             */
/*   Updated: 2019/06/03 13:19:41 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

t_map	*ft_struct_map(int size)
{
	t_map	*map;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(map = (t_map *)ft_memalloc(sizeof(t_map))))
		return (NULL);
	if (!(map->board = (char **)ft_memalloc(sizeof(char *) * (size + 1))))
		return (NULL);
	while (i < size)
	{
		j = 0;
		if (!(map->board[i] = (char *)ft_memalloc(sizeof(char) * (size + 1))))
			return (NULL);
		while (j < size)
		{
			map->board[i][j] = '.';
			j++;
		}
		i++;
	}
	map->board[i] = 0;
	return (map);
}
