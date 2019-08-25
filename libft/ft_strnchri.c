/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:21:03 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:21:04 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnchri(const char *string, const char c, const size_t i)
{
	size_t	n;

	if (!string)
		return (0);
	n = i;
	while (string[n] && string[n] != c)
		++n;
	return (string[n] != c ? ERROR : n);
}
