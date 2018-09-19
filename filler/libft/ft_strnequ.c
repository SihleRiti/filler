/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:27:49 by sriti             #+#    #+#             */
/*   Updated: 2018/08/30 12:27:55 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	len;

	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	len = 0;
	while (*s1 && len < n)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		len += 1;
	}
	return (1);
}
