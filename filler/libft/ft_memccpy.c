/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:50:19 by sriti             #+#    #+#             */
/*   Updated: 2018/08/30 12:50:24 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int						i;
	unsigned char			*tmps1;
	const unsigned char		*tmps2;

	i = 0;
	tmps1 = dst;
	tmps2 = src;
	while (n > 0)
	{
		tmps1[i] = tmps2[i];
		if (tmps1[i] == (unsigned char)c)
			return (dst + 1 + i);
		i++;
		n--;
	}
	return (NULL);
}
