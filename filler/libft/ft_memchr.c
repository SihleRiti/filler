/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:50:41 by sriti             #+#    #+#             */
/*   Updated: 2018/08/30 12:50:46 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			len;

	len = 0;
	str = (unsigned char*)s;
	while (len < n)
	{
		if (str[len] == (unsigned char)c)
			return ((char*)(&str[len]));
		len += 1;
	}
	return (NULL);
}
