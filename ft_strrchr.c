/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 22:53:31 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/05 13:24:39 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{	
	size_t i;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == c)
			return ((char*)s+i);
		i--;
	}
		return (0);
}

