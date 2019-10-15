/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 10:07:14 by dlartigu          #+#    #+#             */
/*   Updated: 2019/06/04 10:52:38 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fillit.h"

int			main(int ac, char **av)
{
	int		fd;
	char	**tab;
	t_tetri	**tetri;
	t_map	*map;

	map = NULL;
	if (ac != 2)
	{
		ft_putstr("usage: [./fillit] [file_to_test] exe target_file\n");
		return (0);
	}
	if (!(fd = open(av[1], O_RDONLY)))
		return (ft_error());
	if (!(tab = ft_read(fd)))
		return (ft_error());
	tab = ft_parser(tab);
	if (!(tetri = (t_tetri **)ft_memalloc(sizeof(t_tetri *) * 27)))
		return (0);
	tetri = ft_tetri_parser(tab, tetri);
	map = ft_finish_map(map, tetri);
	ft_free_tab(tab);
	ft_free_tetri(tetri);
	return (TRUE);
}
