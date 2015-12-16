/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 11:12:20 by gdurand           #+#    #+#             */
/*   Updated: 2015/12/07 18:41:26 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*y;

	y = (unsigned char*)s;
	while (n--)
	{
		if (*y == (unsigned char)c)
			return ((void*)y);
		y++;
	}
	return (NULL);
}
