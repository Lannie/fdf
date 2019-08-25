/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:15:15 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:15:16 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*result;

	if ((result = malloc(sizeof(unsigned char) * size)))
	{
		i = 0;
		while (i < size)
			*((unsigned char *)result + i++) = 0;
	}
	return (result);
}
