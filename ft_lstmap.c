/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsahloum <nsahloum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 19:43:59 by nsahloum          #+#    #+#             */
/*   Updated: 2020/12/26 19:46:50 by nsahloum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;
	t_list	*first;

	if (!lst || !f)
		return (NULL);
	if (!(dst = ft_lstnew(f(lst->content))))
		return (NULL);
	first = dst;
	while (lst)
	{
		if (lst->next)
		{
			if (!(dst->next = ft_lstnew(f(lst->next->content))))
			{
				ft_lstclear(&first, del);
				return (0);
			}
			dst = dst->next;
		}
		lst = lst->next;
	}
	dst->next = NULL;
	return (first);
}