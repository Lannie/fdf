/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:20:03 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:20:05 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	length;
	size_t	i;

	length = ft_strlen((const char *)s1);
	i = 0;
	while (s2[i])
	{
		s1[i + length] = s2[i];
		++i;
	}
	s1[i + length] = NUL;
	return (s1);
}
