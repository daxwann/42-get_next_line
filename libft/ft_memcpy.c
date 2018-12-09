/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 21:47:27 by xwang             #+#    #+#             */
/*   Updated: 2018/10/25 21:55:34 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*s;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)dst;
	s = (unsigned char*)src;
	while (i < n)
	{
		ptr[i] = s[i];
		i++;
	}
	return (dst);
}
