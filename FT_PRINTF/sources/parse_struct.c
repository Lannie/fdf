/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_struct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 12:40:31 by jormond-          #+#    #+#             */
/*   Updated: 2019/09/02 21:17:59 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		parse_struct(char *buf, t_printf *p)
{
	int		i;

	i = -1;
	struct_init(p);
	while (buf[++i])
	{
		if (buf[i] == '-')
			MINUS = '1';
		if (buf[i] == '0' && !ft_strchr(".0123456789", buf[i - 1]))
			ZERO = '1';
		if (buf[i] == '+')
			PLUS = '1';
		if (buf[i] == '#')
			HASH = '1';
		if (buf[i] == ' ')
			SPACE = '1';
		if (ft_strchr("123456789", buf[i]) && buf[i - 1] != '.')
			i = width_converter(p, buf, i);
		if (buf[i - 1] == '.')
			i = prec_converter(p, buf, i);
		if (ft_strchr("hlL", buf[i]))
			i = modif_checker(p, buf, i);
	}
	p->specifier = buf[i - 1];
}
