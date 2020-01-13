/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 19:23:23 by nsahloum          #+#    #+#             */
/*   Updated: 2020/01/13 21:08:23 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_inset(char const *set, char c)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_lencut(char const *s1, char const *set)
{
	size_t len;
	size_t start;
	size_t i;

	i = 0;
	start = 0;
	len = ft_strlen(s1);
	while (s1[i])
	{
		while (ft_inset(set, s1[i]))
			start++;
		i++;
	}
	while (len > 0)
	{
		while (ft_inset(set, s1[len - 1]))
			len--;
	}
	return (len - start);
}
