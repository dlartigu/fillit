/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 13:35:19 by dlartigu          #+#    #+#             */
/*   Updated: 2019/04/19 12:34:21 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 && s2)
	{
		while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
	}
	return (1);
}
