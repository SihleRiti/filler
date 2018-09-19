/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:53:15 by sriti             #+#    #+#             */
/*   Updated: 2018/08/30 12:58:07 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int result;
	int	a;

	sign = 1;
	result = 0;
	a = 0;
	while (str[a] == '\n' || str[a] == '\t' || str[a] == ' ')
		a += 1;
	if (str[a] == '-')
	{
		sign = -1;
		a += 1;
	}
	while (str[a] != '\0')
	{
		if (str[a] >= '0' && str[a] <= '9')
			result = (result * 10) + str[a] - 48;
		else
			return (result * sign);
		a += 1;
	}
	return (result * sign);
}
