/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:39:25 by jcharrou          #+#    #+#             */
/*   Updated: 2019/05/30 12:59:54 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

t_tetri		*ft_struct_main(char *str, int index, t_tetri *tetri)
{
	char letter;

	if (!(tetri = (t_tetri *)ft_memalloc(sizeof(t_tetri))))
		return (NULL);
	tetri->index = index;
	letter = 'A' + tetri->index;
	tetri->letter = letter;
	tetri = ft_struct_hight(str, tetri);
	tetri = ft_struct_width(str, tetri);
	tetri = ft_struct_pos(str, 0, 0, tetri);
	return (tetri);
}
