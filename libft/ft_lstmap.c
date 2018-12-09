/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 21:15:43 by xwang             #+#    #+#             */
/*   Updated: 2018/11/30 22:20:10 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *head;

	if (!lst)
		return (NULL);
	if (!(list = (f)(lst)))
		return (NULL);
	head = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(f)(lst))
			return (NULL);
		else
			list->next = (f)(lst);
		list = list->next;
	}
	return (head);
}
