/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:20:07 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:20:08 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *string, int c)
{
	int		i;

	i = -1;
	while (string[++i])
		if (string[i] == (char)c)
			return ((char *)string + i);
	if (string[i] == (char)c)
		return ((char *)string + i);
	return (NULL);
}
