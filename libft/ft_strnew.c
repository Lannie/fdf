/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:21:17 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:21:17 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*string;

	if (size == (size_t)-1)
		return (NULL);
	if ((string = (char *)ft_memalloc(++size)))
		ft_bzero(string, size);
	return (string);
}
