/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 11:47:23 by gdurand           #+#    #+#             */
/*   Updated: 2015/12/01 19:13:07 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (((unsigned char*)dest)[i] > ((const unsigned char*)src)[i])
		while (i != n)
		{
			((unsigned char*)dest)[n - 1] = ((const unsigned char*)src)[n - 1];
			n--;
		}
	else
		while (i != n)
		{
			((unsigned char*)dest)[i] = ((const unsigned char*)src)[i];
			i++;
		}
	return (dest);
}
