/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:30:22 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/06 15:53:20 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *sp;
	size_t i;

	i = 0;
	sp = (unsigned char *)s;
	while ( i < n)
	{
		if (sp[i] == c)
			return ((void *) s + i);
		i++;
	}
	return (0);
}
