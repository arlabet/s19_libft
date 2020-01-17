/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:16:33 by nsahloum          #+#    #+#             */
/*   Updated: 2020/01/16 21:14:20 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

static char	*malloc_word(char *str, char c)
{
	char *word;
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**arr_free(char **tab, int k)
{
	while (k)
	{
		free(tab[k]);
		k--;
	}
	free(tab);
	return (0);
}

char	**ft_split(char *str, char c)
{
	char	**arr;
	int		i;

	if (!str || !c)
		return (NULL);
	if (!(arr = (char **)malloc(sizeof(char *) * (count_words(str, c) + 1))))
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			if (!(arr[i] = malloc_word(str, c)))
				arr_free(arr, i);
			i++;
			while (*str && *str != c)
				str++;
		}
	}
	arr[i] = NULL;
	return (arr);
}