/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:02:35 by xwang             #+#    #+#             */
/*   Updated: 2018/10/28 17:23:26 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = (char *)s;
	i = 0;
	while (*ptr)
	{
		if (*ptr == (char)c)
			i = 1;
		ptr++;
	}
	if ((char)c == '\0' && *ptr == '\0')
		return (ptr);
	if (i == 0)
		return (NULL);
	while (*ptr != (char)c)
		ptr--;
	return (ptr);
}
