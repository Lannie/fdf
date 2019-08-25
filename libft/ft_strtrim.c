/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <hwilderm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 17:21:39 by hwilderm          #+#    #+#             */
/*   Updated: 2019/08/02 17:21:39 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_start_end(const char *s, size_t *start, size_t *end)
{
	size_t	i;

	i = 0;
	while (s[i] && ft_isspace(s[i]))
		++i;
	if (i == ft_strlen(s))
		return (FALSE);
	*start = i;
	i = ft_strlen(s);
	while (s[--i] && ft_isspace(s[i]))
		continue;
	*end = ++i;
	return (TRUE);
}

char		*ft_strtrim(const char *s)
{
	char	*result;
	size_t	start;
	size_t	end;

	if (s)
	{
		if (get_start_end(s, &start, &end) == 0)
			return (ft_strnew(0));
		result = ft_strnew(end - start);
		if (!result)
			return (NULL);
		return (ft_strncpy(result, s + start, end - start));
	}
	return (NULL);
}
