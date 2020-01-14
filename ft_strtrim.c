/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 19:23:23 by nsahloum          #+#    #+#             */
/*   Updated: 2020/01/14 15:45:48 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static int ft_isinset(char const *set, char c)
{
	size_t i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int ft_start(char const *s1, char const *set)
{
	size_t start;

	start = 0;
	while (s1[i] && ft_inset(set, s1[i]))
		start++;
}

static int ft_end(char const *s1, char const *set)
{
	size_t size;
	
	size = ft_strlen(s1);
	while ()
}

char	*ft_strtrim(char const *s1, char const *set)
{
	
}

int main (void)
{
	char const s1[80] = "a .b .c .d .e .f";
	char const set[80] = " .";

	printf("%s", ft_strtrim(s1, set));
}
