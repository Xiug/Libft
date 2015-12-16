/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:25:08 by gdurand           #+#    #+#             */
/*   Updated: 2015/12/07 19:42:10 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fs;
	size_t	i;

	i = 0;
	if (s && f)
	{
		fs = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!fs)
			return (NULL);
		while (s[i])
		{
			fs[i] = f(i, s[i]);
			i++;
		}
		fs[i] = '\0';
		return (fs);
	}
	return (NULL);
}
