/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:25:17 by sriti             #+#    #+#             */
/*   Updated: 2018/08/30 12:25:26 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	i;

	if (s == NULL || start > ft_strlen(s))
		return (NULL);
	if ((sub_str = (char*)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		sub_str[i] = s[start];
		start += 1;
		i += 1;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
