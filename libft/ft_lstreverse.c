/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:30:35 by xwang             #+#    #+#             */
/*   Updated: 2018/12/01 18:48:54 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstreverse(t_list *alst)
{
	t_list *reverse;
	t_list *new;

	reverse = NULL;
	while (alst)
	{
		new = ft_lstnew(alst->content, alst->content_size);
		ft_lstadd(&reverse, new);
		alst = alst->next;
	}
	return (reverse);
}
