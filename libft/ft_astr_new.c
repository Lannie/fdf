/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_astr_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:11:58 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:11:59 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_astr_new(const unsigned int size_x, const unsigned int size_y)
{
	char			**new;
	unsigned int	i;

	if ((new = (char **)malloc(sizeof(char *) * (size_y + 1))))
	{
		i = (unsigned int)-1;
		while (++i < size_y)
			if (!(new[i] = ft_strnew(size_x)))
			{
				ft_astr_del(new);
				return (NULL);
			}
		new[size_y] = NULL;
	}
	return (new);
}
