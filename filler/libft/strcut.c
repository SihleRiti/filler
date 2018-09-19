/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcut.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:20:01 by sriti             #+#    #+#             */
/*   Updated: 2018/08/30 12:20:07 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*strcut(char *str, int n)
{
	char	*str2;
	int		i;
	int		total;

	total = ft_strlen(str) - n;
	str2 = malloc(sizeof(char *) * n);
	i = 0;
	while (i < total && str[i] != '\0')
	{
		str2[i] = str[i];
		++i;
	}
	return (str2);
}
