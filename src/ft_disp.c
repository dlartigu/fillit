/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:39:45 by dlartigu          #+#    #+#             */
/*   Updated: 2019/05/30 12:59:04 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

char	*ft_disp(char *str)
{
	str = ft_hight(str);
	str = ft_width(str);
	return (str);
}
