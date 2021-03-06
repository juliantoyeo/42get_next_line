/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 23:43:13 by jyeo              #+#    #+#             */
/*   Updated: 2017/12/03 04:36:37 by jyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# include <fcntl.h>
# define BUFF_SIZE 42

typedef	struct		s_line
{
	int				fd;
	char			*n_line;
	struct s_line	*next;
}					t_line;

int					get_next_line(const int fd, char **line);

#endif
