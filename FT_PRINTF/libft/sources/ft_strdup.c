/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <jormond-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 14:15:52 by jormond-          #+#    #+#             */
/*   Updated: 2019/08/27 21:28:56 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *str)
{
	char	*copy;

	if (!(copy = (char *)malloc(ft_strlen(str) + 1)))
		return (NULL);
	ft_strcpy(copy, (char *)str);
	return (copy);
}