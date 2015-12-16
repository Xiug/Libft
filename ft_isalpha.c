/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:05:50 by gdurand           #+#    #+#             */
/*   Updated: 2015/11/26 16:27:45 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c <= 0132 && c >= 0101)
		return (1);
	else if (c <= 0172 && c >= 0141)
		return (1);
	else
		return (0);
}
