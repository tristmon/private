/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmonich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:18:41 by trmonich          #+#    #+#             */
/*   Updated: 2018/11/12 14:59:11 by trmonich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isblank(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*copy;
	char	*end_s;

	if (!s)
		return (NULL);
	while (ft_isblank(*s))
		s++;
	end_s = (char*)s;
	while (*(end_s + 1))
		end_s++;
	while (ft_isblank(*end_s) && *end_s != *s)
		end_s--;
	if (!(copy = ft_strsub(s, 0, end_s - s + 1)))
		return (NULL);
	return (copy);
}
