/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 09:56:09 by jcharrou          #+#    #+#             */
/*   Updated: 2019/06/04 11:26:07 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int			ft_no_tetris(int tetris, char **tab)
{
	if (tetris < 1)
	{
		ft_free_tab(tab);
		return (1);
	}
	return (0);
}

int			ft_last_tetris(char **tab)
{
	int i;
	int j;
	int bln;

	i = 0;
	j = 0;
	bln = 0;
	while (tab[i])
		i++;
	i--;
	while (tab[i][j])
	{
		if (tab[i][j] == '\n')
			bln++;
		j++;
	}
	if (bln > 4)
	{
		ft_free_tab(tab);
		return (1);
	}
	return (0);
}

int			ft_various_case(int tetris, char **tab)
{
	if (ft_no_tetris(tetris, tab) == 1)
		return (1);
	if (ft_last_tetris(tab) == 1)
		return (1);
	return (0);
}

char		**ft_read(int fd)
{
	char	**tab;
	int		ret;
	int		tetris;
	char	buf[21];

	tetris = 0;
	if (!(tab = (char **)ft_memalloc(sizeof(char *) * 27)))
		return (NULL);
	while ((ret = read(fd, buf, 21)))
	{
		buf[ret] = '\0';
		tab[tetris] = ft_strdup(buf);
		tetris++;
		if (ft_check_valid(buf) == FALSE || ft_check_link(buf) == FALSE
				|| tetris > 26)
		{
			ft_free_tab(tab);
			return (NULL);
		}
		ft_bzero(buf, 21);
	}
	if (ft_various_case(tetris, tab) == 1)
		return (NULL);
	return (tab);
}
