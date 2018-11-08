/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmonich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:42:34 by trmonich          #+#    #+#             */
/*   Updated: 2018/11/08 13:31:37 by trmonich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int				ft_atoi(const char *str)
{
	int				signe;
	long long		res;

	res = 0;
	signe = 1;
	while (ft_is_space(*str))
		str++;
	if (*str == '-')
	{
		signe *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += *str - 48;
		str++;
	}
	return (res * signe);
}
