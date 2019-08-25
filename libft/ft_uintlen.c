/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uintlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:21:48 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:21:49 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_uintlen(unsigned int n)
{
	size_t	size;

	size = 0;
	while (n >= 10 ? n /= 10 : FALSE)
		++size;
	return (++size);
}
