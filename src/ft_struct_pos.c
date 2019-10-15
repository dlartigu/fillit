/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:23:26 by jcharrou          #+#    #+#             */
/*   Updated: 2019/06/06 14:27:47 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

t_tetri		*ft_struct_pos(char *str, int x, int y, t_tetri *tetri)
{
	int			i;
	int			h;
	int			swap;

	i = 0;
	h = 0;
	swap = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			x = i - swap;
			tetri->pos[h][1] = x;
			tetri->pos[h][0] = y;
			h++;
		}
		if (str[i] == '\n')
		{
			swap = swap + 5;
			y++;
		}
		i++;
	}
	return (tetri);
}
