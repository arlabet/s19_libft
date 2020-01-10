/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 13:48:47 by nsahloum          #+#    #+#             */
/*   Updated: 2020/01/10 15:11:07 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;
	size_t	i;
	char	*big_cpy;
	char	*little_cpy;

	l = 0;
	b = 0;
	big_cpy = (char *)big;
	little_cpy = (char *)little;
	if (!big || !little)
		return (0);
	if (ft_strlen(little) == 0)
		return (big_cpy);
	while (big_cpy[b] && b < len)
	{
		if (big_cpy[b] == little_cpy[l])
		{
			if (l == 0)
				i = b;
			l++;
		}
		b++;
	}
	if (little_cpy[l] == '\0')
		return(&big_cpy[i]);
	return (0);
}
