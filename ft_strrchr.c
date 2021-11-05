/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benasusmac <benasusmac@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:53:31 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/05 01:07:13 by benasusmac       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{	
    int len;

    
    len = ft_strlen(s);
    //printf("%d debug\n", len);   //debug
	if (!*s)
		return (NULL);
    while(len >= 0 && s[len] != c)
	{
        len--;
        s--;
         printf("%d\n", len);   //debug
    }
	if (*s == 0)
			return (NULL);
	return ((char*)s);
}
