/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:44:02 by xwang             #+#    #+#             */
/*   Updated: 2018/10/27 23:21:20 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t len;
	size_t k;

	i = 0;
	k = 0;
	while (dst[i])
		i++;
	len = i;
	while (src[k] && i + 1 < dstsize)
		dst[i++] = src[k++];
	while (src[k])
		k++;
	if (dstsize == 0 || len >= dstsize)
		return (k + dstsize);
	dst[i] = '\0';
	return (k + len);
}
