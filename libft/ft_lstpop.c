/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 13:03:53 by xwang             #+#    #+#             */
/*   Updated: 2018/12/01 17:46:03 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_lstpop(t_list **alst)
{
	t_list	*list;
	t_list	*top;
	void	*popped;

	if (!alst || !(*alst))
		return (NULL);
	list = *alst;
	top = list->next;
	while (top)
	{
		if (!(top->next))
		{
			popped = top->content;
			free(top);
			top = NULL;
			list->next = NULL;
			return (popped);
		}
		top = top->next;
		list = list->next;
	}
	popped = (*alst)->content;
	free(*alst);
	*alst = NULL;
	return (popped);
}
