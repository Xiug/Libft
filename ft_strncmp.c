/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_strncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:04:07 by gdurand           #+#    #+#             */
/*   Updated: 2015/12/08 16:46:40 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (s1 || s2 || n)
	{
		while (n > 0)
		{
			if (*s1 != *s2)
			{
				return ((unsigned char)*s1 - (unsigned char)*s2);
			}
			if (*s1 == '\0')
				return (0);
			n--;
			s1++;
			s2++;
		}
	}
	return (0);
}
