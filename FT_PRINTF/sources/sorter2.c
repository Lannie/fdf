/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 19:18:31 by jormond-          #+#    #+#             */
/*   Updated: 2019/09/02 21:22:51 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int						sort_bin(char c, va_list ap)
{
	unsigned long		i;
	char				*s;

	s = ft_strnew(BUFF_SIZE);
	if (c == 'b')
	{
		i = va_arg(ap, unsigned long);
		s = ft_itoa_base_c(i, 2, c);
		write(1, s, ft_strlen(s));
	}
}

int						sort_oct(va_list ap, t_printf *p)
{
	unsigned long long	arg;
	char				*tmp;
	char				*s;
	int					len;

	arg = va_arg(ap, unsigned long);
	var_unsign_modif(&arg, p);
	tmp = ft_itoa_base_c(arg, 8, p->specifier);
	len = ft_strlen(tmp);
	if (HASH == '1')
		len++;
	format_oct(&s, tmp, len, p);
	free(s);
}

int						sort_uint(va_list ap, t_printf *p)
{
	unsigned long long	arg;
	int					len;
	char				*s;
	char				*tmp;

	HASH = '0';
	SPACE = '0';
	PLUS = '0';
	arg = va_arg(ap, unsigned long);
	var_unsign_modif(&arg, p);
	tmp = ft_itoa(arg);
	len = ft_strlen(tmp);
	format_int(&s, tmp, len, p);
	free(tmp);
	write_arg_int(s, len, p);
	free(s);
}

int						sort_per(t_printf *p)
{
	int					len;
	char				*s;

	len = 1;
	p->prec = 0;
	format_per(&s, '%', p);
	if (p->width > len)
		len = p->width;
	write(1, s, len);
	free(s);
}
