/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 13:48:47 by nsahloum          #+#    #+#             */
/*   Updated: 2020/01/13 13:27:15 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t l;
	size_t b;

	if (!ft_strlen(little) || !big)
		return ((char *)big);
	b = 0;
	while (big[b] && b < len)
	{
		l = 0;
		while (little[l] && big[b + l] && little[l] == big[b + l]
			&& (b + l) < len)
			l++;
		if (!little[l])
			return ((char*)&big[b]);
		b++;
	}
	return (0);
}
