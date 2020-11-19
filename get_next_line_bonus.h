/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanfred <rmanfred@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:43:40 by rmanfred          #+#    #+#             */
/*   Updated: 2020/06/23 14:14:39 by rmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# ifndef FD_SIZE
#  define FD_SIZE 8192
# endif

# include <stdlib.h>
# include <unistd.h>

int				get_next_line(int fd, char **line);
int				ft_strlen(char *str);
void			*ft_memcpy(void *dst, const void *src, size_t n);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_strdup(char *str);
void			ft_free(char **ptr);
char			*ft_strchr(const char *s, int c);

#endif
