/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modif_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:05:58 by jormond-          #+#    #+#             */
/*   Updated: 2019/09/02 21:17:21 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			modif_checker(t_printf *p, char *buf, int i)
{
	int		j;

	j = 0;
	p->count_mod = 0;
	while (ft_strchr("hlL", buf[i]))
	{
		if (buf[i] == buf[i - 1])
			p->count_mod++;
		p->modifier[j++] = buf[i++];
	}
	p->modifier[j] = '\0';
	return (i);
}
