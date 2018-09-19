/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:26:55 by sriti             #+#    #+#             */
/*   Updated: 2018/08/30 12:27:02 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		count_i;
	int		count_j;
	int		count_c;
	size_t	length;

	length = 0;
	count_i = -1;
	if (little[0] == '\0')
		return ((char*)(big));
	while (big[++count_i] != '\0' && length < len)
	{
		count_j = count_i;
		count_c = 0;
		while (big[count_j] == little[count_c])
		{
			count_j += 1;
			count_c += 1;
			if (little[count_c] == '\0')
				return ((char*)(&big[count_i]));
		}
		length += 1;
	}
	return (NULL);
}
