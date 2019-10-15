/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:32:53 by dlartigu          #+#    #+#             */
/*   Updated: 2019/04/23 17:36:33 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	*tmp;
	char	**res;

	i = 0;
	j = 0;
	tmp = (char *)s;
	if (!s || !(res = (char **)malloc(sizeof(char *) * (ft_wds_nb(s, c)) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		if (ft_is_word(tmp[i - 1], tmp[i], c))
		{
			if (!(res[j] = ft_strndup(tmp + i, ft_wdl(tmp + i, c))))
			{
				free(res);
				return (NULL);
			}
			j++;
		}
		i++;
	}
	res[j] = 0;
	return (res);
}
