/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 16:13:37 by jormond-          #+#    #+#             */
/*   Updated: 2019/09/02 21:23:22 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	struct_init(t_printf *p)
{
	ft_memset(p->flags, '0', 5);
	p->width = 0;
	p->prec = -1;
	p->dot = 0;
	ft_bzero(p->modifier, 4);
	p->specifier = '\0';
	p->hex_hash[0] = '0';
}
