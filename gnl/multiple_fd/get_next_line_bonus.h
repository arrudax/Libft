/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maanton2 <maanton2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 20:43:23 by maanton2          #+#    #+#             */
/*   Updated: 2024/11/11 19:03:16 by maanton2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef FD_MAX
#  define FD_MAX 1024
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char		*get_next_line(int fd);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s);
char		*ft_strjoin(char const *s1, char const *s2);
void		*ft_memcpy(void *dest, const void *src, size_t n);

#endif
