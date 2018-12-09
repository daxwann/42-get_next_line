/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 19:38:38 by xwang             #+#    #+#             */
/*   Updated: 2018/12/02 19:58:22 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	word_count(char const *str, char c)
{
	int i;
	int count;
	int new;

	i = 0;
	count = 0;
	new = 1;
	if (!str || !c)
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] != c) && new == 1)
		{
			new = 0;
			count++;
		}
		else if (str[i] == c)
			new = 1;
		i++;
	}
	return (count);
}

static char	ft_wlen(const char *str, char c)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

char		**ft_strsplit(char const *str, char c)
{
	char	**words;
	int		len;
	int		i;

	if (!str)
		return (NULL);
	len = word_count(str, c);
	if (!(words = (char **)malloc(sizeof(*words) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*str == c && *str != '\0')
			str++;
		words[i] = ft_strsub((const char*)str, 0, ft_wlen((const char*)str, c));
		str += ft_wlen((const char*)str, c);
		i++;
	}
	words[i] = 0;
	return (words);
}
