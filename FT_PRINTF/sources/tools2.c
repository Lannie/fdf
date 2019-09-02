/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:52:52 by jormond-          #+#    #+#             */
/*   Updated: 2019/09/02 21:26:46 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_itoa_base_c(unsigned long long value, int base, char c)
{
	char			rep[16];
	static char		buf[50];
	char			*ptr;
	unsigned long	num;
	int				i;

	*rep = "0123456789abcdef";
	i = 9;
	if (c == 'X')
		while (rep[i++])
			rep[i] = ft_toupper(rep[i]);
	ptr = &buf[49];
	*ptr = '\0';
	num = value;
	if (value != 0 && base == 10)
		value *= -1;
	if (value == 0)
		*--ptr = rep[value % base];
	while (value /= base)
		*--ptr = rep[value % base];
	if (num != 0 && base == 10)
		*--ptr = '-';
	return (ptr);
}

void	int_len_modif(int *len, t_printf *p)
{
	if (p->width == *len || p->width == p->prec)
		p->width++;
	(*len)++;
	p->prec++;
}
