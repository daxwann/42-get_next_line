/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:25:14 by xwang             #+#    #+#             */
/*   Updated: 2018/12/01 17:43:49 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_lstshift(t_list **alst)
{
	t_list	*head;
	void	*shifted;

	if (!alst || !(*alst))
		return (NULL);
	head = (*alst)->next;
	shifted = (*alst)->content;
	free(*alst);
	*alst = head;
	return (shifted);
}
