/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 19:23:23 by nsahloum          #+#    #+#             */
/*   Updated: 2020/01/17 16:11:17 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char const *set, char c)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*res;

	if (!set || !s1)
		return (0);
	end = ft_strlen(s1);
	start = 0;
	while (ft_isinset(set, s1[start]))
		start++;
	while (ft_isinset(set, s1[end - 1]))
		end--;
	if (end <= start)
		end = start;
	if (!(res = malloc(sizeof(char) * (end - start + 1))))
		return (0);
	res = ft_substr(s1, start, (end - start));
	return (res);
}
