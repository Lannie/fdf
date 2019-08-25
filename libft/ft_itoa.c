/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:13:52 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:13:53 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	un;
	int				i;
	size_t			size;

	un = n < 0 ? (unsigned int)(n * -1) : (unsigned int)n;
	size = ft_uintlen(un);
	if ((str = ft_strnew(size + (n < 0 ? 1 : 0))))
	{
		n < 0 && (str[0] = '-') ? (++size) : FALSE;
		i = (int)(size - 1);
		while (un > 9)
		{
			str[i--] = (char)(un % 10 + '0');
			un /= 10;
		}
		str[i] = (char)(un % 10 + '0');
		str[size] = NUL;
	}
	return (str);
}
