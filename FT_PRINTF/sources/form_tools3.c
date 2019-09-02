/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_tools3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 15:53:58 by jormond-          #+#    #+#             */
/*   Updated: 2019/09/02 21:07:48 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			push_zero(char **s, int calibr, int len, t_printf *p)
{
	int		i;
	int		zero;

	i = -1;
	if ((zero = p->prec - len) < 0)
		zero = 0;
	if (p->width > len && p->width > p->prec && ZERO == '1'
		&& MINUS == '0')
	{
		if (len > p->prec)
			zero = p->width - len;
		else
			zero = p->prec - len;
	}
	while (++i < zero)
		(*s)[calibr + i] = '0';
	return (calibr + zero);
}

void		ft_push_arg(char **s, char *tmp, t_printf *p)
{
	int		i;
	int		len;
	int		size;

	i = -1;
	len = ft_strlen(tmp);
	size = ft_size_modif(len, p);
	ft_push_arg2(s, tmp, size, p);
}

void		ft_push_arg2(char **s, char *tmp, int size, t_printf *p)
{
	int		i;
	int		len;

	i = -1;
	len = ft_strlen(tmp);
	if (p->prec == 0)
		return ;
	else if (p->prec > 0 && p->prec < len)
		while (++i < p->prec)
			(*s)[size + i] = tmp[i];
	else
		while (tmp[++i])
			(*s)[size + i] = tmp[i];
}

void		cut_zero(char **s, int len, t_printf *p)
{
	int		i;

	if ((MINUS == '1' && p->width > len) || (ZERO == '1'
		&& p->width > len))
	{
		if (len > p->prec)
			i = len;
		else
			i = p->prec;
	}
	while (i < p->width)
		(*s)[i++] = ' ';
}

void		push_arg_int(char **s, char *tmp, int len, t_printf *p)
{
	int		i;
	int		calibr;

	i = -1;
	calibr = calibration_of_prec(len, p);
	if (PLUS == '1' || SPACE == '1')
		calibr = fill_plus_or_space(s, calibr, p);
	if (ZERO == '1' && p->prec < p->width)
		calibr = cut_front_zero(s, p);
	calibr = push_zero(s, calibr, len, p);
	while (tmp[++i])
		(*s)[calibr + i] = tmp[i];
}
