/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 23:32:00 by xwang             #+#    #+#             */
/*   Updated: 2018/09/13 14:03:16 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	k;
	size_t	i;

	k = 0;
	while (s1[k] != '\0')
		k++;
	copy = (char *)malloc(sizeof(*copy) * (k + 1));
	if (!copy && k != 0)
		return (NULL);
	i = 0;
	while (i < k)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
