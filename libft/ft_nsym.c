/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nsym.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:16:17 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:16:18 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Count symbols c in constant array of char string
*/

ssize_t				ft_nsym(const char *string, char c)
{
	ssize_t			n;
	size_t			i;

	if (string)
	{
		n = 0;
		i = 0;
		while (string[i])
			if (string[i++] == c)
				++n;
	}
	else
		return (ERROR);
	return (n);
}
