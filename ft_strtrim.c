/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 14:51:05 by gdurand           #+#    #+#             */
/*   Updated: 2015/12/16 16:05:42 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		count(char const *s, int *x, int *y, int *z)
{
	int		i;

	i = 0;
	*x = 0;
	*y = 0;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		i++;
	if (s[i] == '\0')
		*z = i;
	*x = i;
	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		i--;	
	*y = i;
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		x;
	int		y;
	int		z;
	char	*str;

	i = 0;
	z = 0;
	count(s, &x, &y, &z);
	if (x < 0)
		return (NULL);
	if (z > 0)
		str = (char*)malloc(sizeof(char) * (z + 1));
	else
	{
		if  (!(str = (char*)malloc(sizeof(char) * (y - x + 2))))
			return (NULL);
	}
	while (x <= y)
	{
		str[i] = s[x];
		i++;
		x++;
	}
	str[i] = '\0';
	return (str);
}
