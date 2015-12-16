/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:03:27 by gdurand           #+#    #+#             */
/*   Updated: 2015/12/07 18:58:19 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	y;
	size_t	x;

	i = 0;
	y = 0;
	x = ft_strlen(dst) + ft_strlen(src);
	while (dst[i] != '\0' && i < size)
		i++;
	if (size - i == 0)
		return (i + ft_strlen(src));
	while (i != size - 1 && src[y] != '\0')
	{
		dst[i] = src[y];
		i++;
		y++;
	}
	dst[i] = 0;
	return (x);
}
