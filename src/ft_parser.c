/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:09:47 by dlartigu          #+#    #+#             */
/*   Updated: 2019/05/30 16:37:44 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

char	**ft_parser(char **tab)
{
	int index;

	index = 0;
	while (tab[index])
	{
		tab[index] = ft_disp(tab[index]);
		index++;
	}
	return (tab);
}
