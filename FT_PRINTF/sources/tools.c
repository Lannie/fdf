/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 18:16:42 by jormond-          #+#    #+#             */
/*   Updated: 2019/09/02 21:24:47 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int					ft_nbrlen(unsigned long i)
{
	unsigned long	tmp;
	int				counter;

	tmp = i;
	counter = 0;
	while (tmp > 0)
	{
		tmp /= 10;
		counter++;
	}
	return (counter);
}

void				write_arg(char *s, int len, t_printf *p)
{
	if (p->width < len && (p->prec < 0 || p->prec > len))
		write(1, s, len);
	else if (p->width < len && p->prec > 0 && p->prec < len)
		write(1, s, p->prec);
	else
		write(1, s, p->width);
}

void				write_arg_c(char *s, int len, t_printf *p)
{
	if (p->width < len)
		write(1, s, len);
	else
		write(1, s, p->width);
}

void				write_arg_hex_oct(char *s, int size, t_printf *p)
{
	write(1, s, size);
}

void				write_arg_int(char *s, int len, t_printf *p)
{
	if (p->width >= len && p->width >= p->prec)
		write(1, s, p->width);
	else if (p->width < len && p->prec < len)
		write(1, s, len);
	else
		write(1, s, p->prec);
}
