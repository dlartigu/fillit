/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:34:34 by dlartigu          #+#    #+#             */
/*   Updated: 2019/05/30 12:59:16 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

char	*ft_hight(char *str)
{
	int		i;
	int		h;

	i = 0;
	h = 0;
	while (str[i] != '#')
	{
		if (str[i] == '\n')
			h = h + 5;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			str[i] = '.';
			str[i - h] = '#';
		}
		i++;
	}
	return (str);
}