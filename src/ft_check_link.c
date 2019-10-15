/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_link.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 14:18:22 by dlartigu          #+#    #+#             */
/*   Updated: 2019/05/30 14:21:24 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int		ft_check_link(char *str)
{
	int	i;
	int	link;

	i = 0;
	link = 0;
	if (!str)
		return (0);
	while (i < 20)
	{
		if (str[i] == '#')
		{
			if (str[i + 1] == '#' && (i + 1) < 20)
				link++;
			if (str[i - 1] == '#' && (i - 1) >= 0)
				link++;
			if (str[i + 5] == '#' && (i + 5) < 20)
				link++;
			if (str[i - 5] == '#' && (i - 5) >= 0)
				link++;
		}
		i++;
	}
	if (link == 6 || link == 8)
		return (TRUE);
	return (FALSE);
}
