/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmonich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:35:43 by trmonich          #+#    #+#             */
/*   Updated: 2018/11/07 12:37:18 by trmonich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n && ((unsigned char*)src)[i] != (unsigned char)c)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	if (((unsigned char*)src)[i] == (unsigned char)c && i != n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		return (&(dst[i + 1]));
	}
	else
		return (NULL);
}
