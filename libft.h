/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjeronim <gjeronim@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:24:03 by gjeronim          #+#    #+#             */
/*   Updated: 2021/08/25 13:00:22 by gjeronim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
int				ft_atoi(char *str);
void			*ft_calloc(size_t num, size_t size);
void			ft_bzero(void *s, size_t n);
char			*ft_strdup(const char *str);
int				ft_isascii(int character);
int				ft_isalnum(int character);
int				ft_isalpha(int character);
int				ft_isdigit(int number);
int				ft_isprint(int character);
void			*ft_memchr(const void *string, int character, size_t len);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *s, int c, size_t n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strchr(const char *s, int c);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
size_t			ft_strlcpy(char *dst, const char *src,
size_t dstsize);
size_t				ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(const char *string, const char *substring
,size_t len);

char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(char *str, char *to_find);
int				ft_tolower(int character);
int				ft_toupper(int character);
#endif
