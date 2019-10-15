/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_hight.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:27:18 by dlartigu          #+#    #+#             */
/*   Updated: 2019/06/04 09:47:07 by jcharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

t_tetri			*ft_struct_hight(char *str, t_tetri *tetri)
{
	int			i;
	int			h;
	int			diez;

	i = 0;
	h = 0;
	diez = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			diez++;
		}
		if (str[i] == '\n')
			h++;
		if ((diez == 4) && (str[i + 1] == '.' || str[i + 1] == '\n'))
		{
			h++;
			break ;
		}
		i++;
	}
	tetri->hight = h;
	return (tetri);
}
