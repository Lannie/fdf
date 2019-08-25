/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:20:27 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:20:28 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;

	if ((result = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1) + 1))))
		result = ft_strcpy(result, s1);
	return (result);
}
