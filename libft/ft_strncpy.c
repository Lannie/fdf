/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:21:10 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:21:11 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	int	i;

	i = -1;
	while (++i < (int)len && src[i])
		dst[i] = src[i];
	i--;
	while (++i < (int)len)
		dst[i] = NUL;
	return (dst);
}
