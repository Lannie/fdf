/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:20:52 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:20:53 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*string;
	size_t	i;

	if (s && f)
	{
		if ((string = ft_strnew(ft_strlen(s))))
		{
			i = 0;
			while (s[i])
			{
				string[i] = f((char)s[i]);
				++i;
			}
		}
	}
	else
		return (NULL);
	return (string);
}
