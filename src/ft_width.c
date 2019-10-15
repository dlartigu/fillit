/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:36:24 by dlartigu          #+#    #+#             */
/*   Updated: 2019/05/22 13:42:51 by jcharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

char	*ft_width(char *str)
{
	int		i;
	int		min;

	i = 0;
	min = 4;
	while (str[i])
	{
		if (str[i] == '#' && i % 5 < min)
			min = i % 5;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '#')
		{
			str[i] = '.';
			str[i - min] = '#';
		}
		i++;
	}
	return (str);
}
