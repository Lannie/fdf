/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_astr_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:11:37 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:19:11 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_astr_del(char **astr)
{
	int		i;

	if (astr)
	{
		i = -1;
		while (astr[++i])
		{
			free(astr[i]);
			astr[i] = NULL;
		}
		free(astr);
		astr = NULL;
	}
}
