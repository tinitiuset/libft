/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalient <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:42:35 by mvalient          #+#    #+#             */
/*   Updated: 2022/09/01 11:36:25 by mvalient         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <string.h>

void	ft_bzero(void *s, size_t n);

int		ft_isalnum(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t maxlen);
size_t	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
#endif
