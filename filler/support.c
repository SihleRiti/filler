/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:35:59 by sriti             #+#    #+#             */
/*   Updated: 2018/08/30 11:36:13 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include "libft/libft.h"

void	freeall(t_env *env, char **map)
{
	int i;

	i = 0;
	while (i != env->map.map_y)
	{
		free(map[i]);
		i++;
	}
	free(map);
}

char	**create_two_d(int y)
{
	int		i;
	char	**array;

	i = 0;
	array = (char **)malloc(sizeof(char*) * 500);
	while (i != y)
	{
		array[i] = (char *)malloc(sizeof(char*) * 500);
		i++;
	}
	return (array);
}

void	link_to_twoda(char **map, int x, int y, t_raw_map *m)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			map[i][j] = m->point;
			m = m->next;
			j++;
		}
		i++;
	}
}
