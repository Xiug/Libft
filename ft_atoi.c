/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurand <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 11:06:42 by gdurand           #+#    #+#             */
/*   Updated: 2015/12/07 19:02:04 by gdurand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_pn(const char *str, int *p_n, int i)
{
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '\0')
		*p_n = -3;
	if (str[i] == '-')
		*p_n = -2;
	return (i);
}

int			ft_atoi(const char *str)
{
	int	result;
	int	p_n;
	int	i;

	i = 0;
	p_n = 0;
	result = 0;
	i = ft_pn(str, &p_n, i);
	if (p_n == -3)
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] <= 57 && str[i] >= 48)
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (p_n == -2)
		return (-result);
	else
		return (result);
}
