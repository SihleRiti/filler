/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:34:41 by sriti             #+#    #+#             */
/*   Updated: 2018/08/30 11:35:03 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include "libft/libft.h"

void	insert_line(char *line, t_raw_map **b)
{
	int	i;

	i = 4;
	while (line[i])
	{
		b[0] = (t_raw_map *)malloc(sizeof(t_raw_map));
		b[0]->point = line[i];
		i++;
		b[0]->next = b[1];
		b[1] = b[0];
	}
}

void	insert_piece(char *line, t_env *env)
{
	int	i;
	int	j;
	int	place;

	place = 0;
	i = 0;
	j = 0;
	env->piece.piece = (char **)malloc(sizeof(char **) * env->piece.piece_y);
	while (j < env->piece.piece_y)
	{
		env->piece.piece[j] = \
			(char *)malloc(sizeof(char *) * env->piece.piece_x);
		++j;
	}
	j = 0;
	while (j < env->piece.piece_y)
	{
		i = 0;
		while (i < env->piece.piece_x && line[place] != '\0')
		{
			env->piece.piece[j][i++] = line[place];
			place++;
		}
		j++;
	}
}
