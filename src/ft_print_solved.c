/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_solved.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:35:15 by dlartigu          #+#    #+#             */
/*   Updated: 2019/06/03 13:10:55 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

void		ft_print_solved(t_map *map)
{
	int		i;

	i = 0;
	while (map->board[i])
	{
		ft_putendl(map->board[i]);
		i++;
	}
}
