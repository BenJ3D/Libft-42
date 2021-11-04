/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:53:31 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/04 14:04:41 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{	
	if (!*s)
		return (NULL);
	while(*s && *s != c)  // modifier en int
	{
		if (*s == 0)
			return (NULL);
		s++;
	}
	return ((char*)s);
}
