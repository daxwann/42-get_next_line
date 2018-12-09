/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 16:46:34 by xwang             #+#    #+#             */
/*   Updated: 2018/12/01 17:19:45 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush(t_list **alst, t_list *new_ele)
{
	t_list *top;

	if (!alst || !new_ele)
		return ;
	top = *alst;
	while (top->next)
		top = top->next;
	top->next = new_ele;
}
