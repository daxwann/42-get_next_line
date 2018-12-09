/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 13:59:26 by xwang             #+#    #+#             */
/*   Updated: 2018/12/02 19:00:22 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_digits(unsigned int num)
{
	int len;

	len = 1;
	while (num / 10 != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	unsigned int	num;
	int				len;
	char			*arr;

	len = 0;
	if (n < 0)
	{
		len = 1;
		num = (unsigned int)(-n);
	}
	else
		num = (unsigned int)(n);
	len += count_digits(num);
	if (!(arr = ft_strnew(len)))
		return (NULL);
	len--;
	while (num / 10 != 0)
	{
		arr[len--] = num % 10 + '0';
		num /= 10;
	}
	arr[len] = num + '0';
	if (n < 0)
		arr[0] = '-';
	return (arr);
}
