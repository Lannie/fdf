/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:21:00 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:21:01 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	size1;
	size_t	size2;
	size_t	i;

	size1 = ft_strlen((const char *)s1);
	size2 = ft_strlen(s2);
	i = 0;
	while (i < n && i < size2)
	{
		s1[i + size1] = s2[i];
		++i;
	}
	s1[i + size1] = NUL;
	return (s1);
}
