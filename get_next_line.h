/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrock <bbrock@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 13:05:49 by bbrock            #+#    #+#             */
/*   Updated: 2020/06/23 14:27:22 by rmanfred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <stdlib.h>
# include <unistd.h>

int						get_next_line(int fd, char **line);
int						ft_strlen(char *str);
void					*ft_memcpy(void *dst, const void *src, size_t n);
char					*ft_strjoin(char *s1, char *s2);
char					*ft_strdup(char *str);
void					ft_free(char **ptr);
char					*ft_strchr(const char *s, int c);

#endif
