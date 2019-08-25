/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:20:31 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:20:31 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(const char *s1, char const *s2)
{
	if (s1 && s2)
		if (ft_strcmp(s1, s2) == 0)
			return (TRUE);
	return (FALSE);
}
