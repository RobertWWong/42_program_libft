/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rowong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 13:41:06 by rowong            #+#    #+#             */
/*   Updated: 2018/07/09 13:41:25 by rowong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void			ft_memset(void *b, int c, size_t len);	//need test
void			ft_bzero(void *s, size_t n);	//need test
void			*ft_memcpy(void * dst, void *src, size_t n);
void			ft_memccpy();
void			ft_memmove();
int				ft_memchr();
void			ft_memcmp();
size_t			ft_strlen(const char *str);									//need test
size_t			ft_strnlen(const char *str, size_t len);
char			*ft_strcpy(char *dest, char *src);						//need test
char			*ft_strncpy(char *dest, char *src, unsigned int n);		//need test
char			*ft_strcat(char *dest, char *src);						//need test
char			*ft_strncat(char *dest, char *src, int nb);				//need test
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);	//need test
char			*ft_strchr(const char *s, int c);	//need test
char			*ft_strrchr(const char *s, int c);	//need test
char			*ft_strstr(const char *str, const char *to_find);	//need test
char			*ft_strnstr(const char *str, const char *to_find, size_t len);	//need test
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
int				ft_atoi(char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);

void			ft_putchar(char c);
void			ft_putstr(char const *s);

#endif
