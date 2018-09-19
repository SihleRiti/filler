/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:25:04 by sriti             #+#    #+#             */
/*   Updated: 2018/08/30 12:25:13 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int	count_i;
	int	count_j;
	int	count_c;

	count_i = 0;
	if (little[0] == '\0')
		return ((char*)(big));
	while (big[count_i] != '\0')
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
		count_i += 1;
	}
	return (NULL);
}
