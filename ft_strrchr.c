/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benasusmac <benasusmac@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:53:31 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/04 16:10:30 by benasusmac       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{	
    int len;
    char cp
	if (!*s)
		return (NULL);
    len = ft_strlen((char*)s);
    len--;
    while(len >= 0 && s[len] != c)
		len--;
	if (*s == 0)
			return (NULL);
	return ((char*)s);
}
