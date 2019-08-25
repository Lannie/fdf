/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:17:27 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:17:28 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		ft_get_factor(unsigned int index)
{
	unsigned int	factor;

	factor = ++index ? 1 : FALSE;
	while (--index > 0)
		factor *= 10;
	return (factor);
}

void					ft_putnbr(int n)
{
	unsigned int	factor;
	unsigned int	un;
	unsigned int	size;

	un = n < 0 ? (unsigned int)(n * -1) : (unsigned int)n;
	n < 0 ? ft_putchar('-') : FALSE;
	size = (unsigned int)ft_uintlen(un);
	factor = ft_get_factor(size);
	while (un > 9 ? --size && (factor = ft_get_factor(size))
		: factor > 0 && (factor /= 10))
	{
		ft_putchar((char)(un / factor + '0'));
		un %= factor;
	}
}
