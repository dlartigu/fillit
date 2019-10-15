/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:27:40 by dlartigu          #+#    #+#             */
/*   Updated: 2019/05/30 12:43:14 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

t_tetri			*ft_struct_width(char *str, t_tetri *tetri)
{
	int			i;
	int			w;
	int			max_w;

	i = 0;
	w = 0;
	max_w = 0;
	while (str[i])
	{
		if (str[i] == '#')
			w++;
		if (str[i] == '.' && str[i + 1] == '#')
			w++;
		if (str[i] == '\n' && w >= max_w)
		{
			max_w = w;
			w = 0;
		}
		i++;
	}
	tetri->width = max_w;
	return (tetri);
}
