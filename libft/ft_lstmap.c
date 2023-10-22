/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahanak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:56:59 by vahanak           #+#    #+#             */
/*   Updated: 2023/10/22 18:10:26 by vahanak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newelem;
	t_list	*newlst;

	newlst = NULL;
	if (lst && f)
	{
		while (lst)
		{
			newelem = ft_lstnew(f(lst -> content));
			if (!newelem)
			{
				ft_lstclear(&newlst, del);
				return (NULL);
			}
			ft_lstadd_back(&newlst, newelem);
			lst = lst -> next;
		}
		return (newlst);
	}
	return (NULL);
}
