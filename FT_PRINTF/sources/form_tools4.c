/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_tools4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 16:00:11 by jormond-          #+#    #+#             */
/*   Updated: 2019/09/02 21:27:58 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			fill_plus_or_space(char **s, int calibr, t_printf *p)
{
	if (PLUS == '1')
		(*s)[calibr] = '+';
	else if (PLUS == '0' && SPACE == '1')
		(*s)[calibr] = ' ';
	return (++calibr);
}

int			cut_front_zero(char **s, t_printf *p)
{
	int		i;
	int		size;

	i = -1;
	size = p->width - p->prec;
	while (++i < size)
		(*s)[i] = ' ';
	return (i);
}

void		var_sign_modif(long long *arg, t_printf *p)
{
	if (p->modifier[0] == 'h' && (p->count_mod % 2) != 0)
		(*arg) = (char)(*arg);
	else if (p->modifier[0] == 'h' && (p->count_mod % 2) == 0)
		(*arg) = (short)(*arg);
	else if (p->modifier[0] == 'l' && (p->count_mod % 2) != 0)
		(*arg) = (long)(*arg);
	else if (p->modifier[0] == 'l' && (p->count_mod % 2) == 0)
		(*arg) = (long long)(*arg);
	else
		(*arg) = (int)(*arg);
}

void		var_unsign_modif(unsigned long long *arg, t_printf *p)
{
	if (p->modifier[0] == 'h' && (p->count_mod % 2) != 0)
		(*arg) = (unsigned char)(*arg);
	else if (p->modifier[0] == 'h' && (p->count_mod % 2) == 0)
		(*arg) = (unsigned short)(*arg);
	else if (p->modifier[0] == 'l' && (p->count_mod % 2) != 0)
		(*arg) = (unsigned long)(*arg);
	else if (p->modifier[0] == 'l' && (p->count_mod % 2) == 0)
		(*arg) = (unsigned long long)(*arg);
	else
		(*arg) = (unsigned int)(*arg);
}

void		push_per(char **s, char tmp, t_printf *p)
{
	int		calibr;

	calibr = 0;
	if (MINUS == '0')
		if ((calibr = p->width - 1) < 0)
			calibr = 0;
	if (MINUS == '1')
		cut_zero(s, 1, p);
	(*s)[calibr] = '%';
}
