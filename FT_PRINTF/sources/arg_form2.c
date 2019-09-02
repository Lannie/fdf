/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_form2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 13:48:48 by jormond-          #+#    #+#             */
/*   Updated: 2019/09/02 21:02:35 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	format_int(char **s, char *tmp, int len, t_printf *p)
{
	int		size;

	size = 0;
	if (MINUS == '1')
		ZERO = '0';
	if (p->prec > len)
		size = p->prec - len;
	ft_arg_mal(s, len + size, p);
	push_arg_int(s, tmp, len, p);
}

void	format_per(char **s, char tmp, t_printf *p)
{
	ft_arg_mal(s, 1, p);
/* printf("%s| - s\n", *s);  		  <--------wrong malloc!!!! */
	push_per(s, tmp, p);
}
