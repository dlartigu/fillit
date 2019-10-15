/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 11:11:49 by jcharrou          #+#    #+#             */
/*   Updated: 2019/05/17 13:37:06 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int		ft_check_valid(char *str)
{
	int i;
	int	dot;
	int	htag;
	int	bln;

	i = 0;
	dot = 0;
	htag = 0;
	bln = 0;
	while (str[i] != '\0')
	{
		str[i] == '.' ? dot++ : dot;
		str[i] == '#' ? htag++ : htag;
		str[i] == '\n' ? bln++ : bln;
		i++;
	}
	if ((htag == 4 && dot == 12) && (bln == 4 || bln == 5))
		return (TRUE);
	else
		return (FALSE);
}
