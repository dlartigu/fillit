/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:58:59 by dlartigu          #+#    #+#             */
/*   Updated: 2019/06/03 14:03:34 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

void	ft_free_tetri(t_tetri **tetri)
{
	int i;

	i = 0;
	while (tetri[i])
	{
		ft_memdel((void **)&(tetri)[i]);
		i++;
	}
	ft_memdel((void **)&(tetri));
}
