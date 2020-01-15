/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:16:33 by nsahloum          #+#    #+#             */
/*   Updated: 2020/01/15 19:20:53 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_wtab(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	w;
	size_t	l;

	w = 0;
	i = 0;
	l = 0;
	while (s[i])
	{
		if (s[i] == c)
			w++;
		i++;
	}
	if (!(**tab = malloc(w + 1)))
		return (NULL);
	return (tab);
}

static char	**ft_ltab(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	w;
	size_t	l;

	tab = ft_wtab(s, c, tab);
	while (s[i])
	{
		if (s[i] == c)
		{
			if (!(*tab[w] = malloc(l + 1)))
				return (NULL);
			w++;
			l = 0;
		}
		i++;
		l++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;

	i = 0;
	tab = ft_ltab(s, c);

	while(s[i])
	{
		
		i++;
	}
}
