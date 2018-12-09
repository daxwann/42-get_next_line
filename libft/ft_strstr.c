/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:49:49 by xwang             #+#    #+#             */
/*   Updated: 2018/10/28 18:36:37 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*str;
	size_t	i;

	str = (char *)haystack;
	if (*needle == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		while (*(needle + i) && *(str + i) == *(needle + i))
			i++;
		if (*(needle + i) == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
