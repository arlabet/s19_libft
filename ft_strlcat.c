/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 16:44:35 by nsahloum          #+#    #+#             */
/*   Updated: 2020/01/09 20:48:37 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int i;
	unsigned int l;
	unsigned int j;

	i = 0;
	l = 0;
	j = 0;
	while (src[l])
		l++;
	while (dst[i])
		i++;
	if (size <= i)
		l = l + size;
	else
		l = l + i;
	while (i + 1 < size && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (l);
}
