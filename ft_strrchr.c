/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:58:32 by gdurand           #+#    #+#             */
/*   Updated: 2015/12/08 17:01:02 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0 && (char)c != s[i])
		i--;
	if ((char)c == s[i])
		return ((char*)s + i);
	if ((char)c == s[0])
		return ((char*)s);
	return (NULL);
}
