/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 16:29:12 by nsahloum          #+#    #+#             */
/*   Updated: 2020/01/13 12:01:46 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	n;
	int		j;

	i = 0;
	n = 0;
	j = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	i--;
	while (ft_isdigit(str[++i]))
		n = n * 10 + (str[i] - 48);
	if (n > 2147483648 && j == -1)
		return (0);
	else if (n > 2147483647 && j == 1)
		return (-1);
	return (j * n);
}
