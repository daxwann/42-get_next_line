/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 18:44:47 by xwang             #+#    #+#             */
/*   Updated: 2018/10/28 19:06:06 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	size_t	i;

	str = (char *)haystack;
	if (*needle == '\0')
		return (str);
	while (*str && len)
	{
		i = 0;
		while (i < len && *(needle + i) && *(str + i) == *(needle + i))
			i++;
		if (*(needle + i) == '\0')
			return (str);
		str++;
		len--;
	}
	return (NULL);
}
