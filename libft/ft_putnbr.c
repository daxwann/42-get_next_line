/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:58:54 by xwang             #+#    #+#             */
/*   Updated: 2018/12/02 19:06:20 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr(int n)
{
	unsigned int	num;

	if (n < 0)
	{
		write(1, "-", 1);
		num = (unsigned int)(-n);
	}
	else
		num = (unsigned int)n;
	if (num / 10 != 0)
	{
		n = (int)(num / 10);
		ft_putnbr(n);
	}
	ft_putchar(num % 10 + '0');
}
