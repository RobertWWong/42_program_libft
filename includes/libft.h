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

void			ft_memset();
void			ft_bzero();
void			ft_memcpy();
void			ft_memccpy();
void			ft_memmove();
int				ft_memchr();
void			ft_memcmp();
size_t			ft_strlen(char *str);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, int nb);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			ft_strchr();
char			ft_strrchr();
char			*ft_strstr(char *str, char *to_find);
char			ft_strnstr();
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_atoi(char *str);
int				ft_isalpha(char *str);
int				ft_isdigit();
int				ft_isalnum(int c);
int				ft_isascii();
int				ft_isprint(char *str);
int				ft_toupper();
int				ft_tolower();

void			ft_putchar(char c);
void			ft_putstr(char const *s);

#endif
