/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:53:23 by gdurand           #+#    #+#             */
/*   Updated: 2015/12/08 18:10:05 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t y;
	size_t x;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i] && n > 0)
	{
		y = 0;
		if (n < ft_strlen(s2))
			return (NULL);
		x = i;
		while (s1[x] == s2[y] && s2[y] && s1[x])
		{
			x++;
			y++;
		}
		if (s2[y] == '\0')
			return ((char *)s1 + i);
		i++;
		n--;
	}
	return (NULL);
}
