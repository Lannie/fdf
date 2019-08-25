/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwilderm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:18:28 by hwilderm          #+#    #+#             */
/*   Updated: 2019/07/04 14:48:00 by hwilderm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "fcntl.h"
# include "sys/types.h"
# include <unistd.h>
# include "libft/libft.h"

# define BUFF_SIZE 11000
# define FT_OPEN_MAX 10240

int get_next_line(const int fd, char **line);

#endif
