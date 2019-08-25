/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:20:40 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:20:41 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;

	if (s1 && s2)
	{
		if ((result = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		{
			result = ft_strcpy(result, s1);
			result = ft_strcat(result, s2);
		}
	}
	else
		return (NULL);
	return (result);
}
