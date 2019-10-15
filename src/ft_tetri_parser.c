/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetri_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:37:59 by dlartigu          #+#    #+#             */
/*   Updated: 2019/05/30 16:45:22 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

t_tetri		**ft_tetri_parser(char **tab, t_tetri **tetri)
{
	int index;

	index = 0;
	while (tab[index])
	{
		tetri[index] = ft_struct_main(tab[index], index, tetri[index]);
		index++;
	}
	return (tetri);
}
