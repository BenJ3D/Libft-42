/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:59:56 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/04 12:46:14 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
size_t	ft_strlen(char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
void *ft_memset	(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);

int	ft_toupper(int c);
int	ft_tolower(int c);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
char *ft_strchr(const char *s, int c);
#endif