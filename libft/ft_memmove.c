/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 22:56:31 by xwang             #+#    #+#             */
/*   Updated: 2018/10/26 00:43:47 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *ptr;
	unsigned char *s;

	ptr = (unsigned char *)dst;
	s = (unsigned char *)src;
	if ((unsigned long)dst < (unsigned long)src)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len > 0)
		{
			ptr[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}
