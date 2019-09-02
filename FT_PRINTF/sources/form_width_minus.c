/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_width_minus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:32:24 by jormond-          #+#    #+#             */
/*   Updated: 2019/09/02 21:28:34 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

// char    *form_width_minus(char *s, t_printf *p)
// {
// 	int		i;
// 	int     size;
// 	char    *s1;

// 	i = -1;
// 	if ((size = p->width - (int)ft_strlen(s)) < 0)
// 		size = 0;
// 	s1 = ft_strnew(p->width);
// 	if (ZERO == '1')
// 		s1 = ft_memset(s1, 48, p->width);
// 	else
// 		s1 = ft_memset(s1, 32, p->width);
// 	if (MINUS == '1')
// 		while(++i < (int)ft_strlen(s))
// 			s1[i] = s[i];
// 	else
// 		while(s1[++i + size])
// 			s1[i + size] = s[i];
// 	return (s1);
// }
