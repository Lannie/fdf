/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:36:04 by jormond-          #+#    #+#             */
/*   Updated: 2019/09/02 21:21:32 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int						sort_int(va_list ap, t_printf *p)
{
	int					len;
	long long			arg;
	char				*s;
	char				*tmp;

	HASH = '0';
	arg = va_arg(ap, long long);
	var_sign_modif(&arg, p);
	tmp = ft_itoa(arg);
	len = ft_strlen(tmp);
	if (PLUS == '1' || SPACE == '1')
		int_len_modif(&len, p);
	if (PLUS == '1' && SPACE == '1')
		SPACE = '0';
	format_int(&s, tmp, len, p);
	free(tmp);
	write_arg_int(s, len, p);
	free(s);
}

int						sort_chr(va_list ap, t_printf *p)
{
	char				c1;
	char				*s;
	int					len;

	len = 1;
	c1 = va_arg(ap, int);
	format_chr(&s, p);
	if (MINUS == '1' || p->width == 0)
		s[0] = c1;
	else
		s[p->width - len] = c1;
	write_arg_c(s, len, p);
	free(s);
}

int						sort_str(va_list ap, t_printf *p)
{
	char				*s;
	char				*tmp;
	int					len;

	len = 6;
	if (!(tmp = va_arg(ap, char *)))
		write(1, "(null)", len);
	else
	{
		len = ft_strlen(tmp);
		format_str(&s, tmp, len, p);
		write_arg(s, len, p);
		free(s);
	}
	return (len);
}

int						sort_ptr(va_list ap, t_printf *p)
{
	void				*ptr;
	char				*tmp;
	char				*s;
	int					len;

	ptr = va_arg(ap, void *);
	tmp = ft_itoa_base_c((unsigned long long)ptr, 16, p->specifier);
	len = ft_strlen(tmp) + 2;
	p->prec += 2;
	format_ptr(&s, tmp, len, p);
	free(s);
}

int						sort_hex(va_list ap, t_printf *p)
{
	unsigned long long	arg;
	char				*tmp;
	char				*s;
	int					len;

	arg = va_arg(ap, unsigned long);
	var_unsign_modif(&arg, p);
	tmp = ft_itoa_base_c(arg, 16, p->specifier);
	len = ft_strlen(tmp);
	if (HASH == '1')
	{
		len += 2;
		p->prec += 2;
	}
	format_hex(&s, tmp, len, p);
	free(s);
}
