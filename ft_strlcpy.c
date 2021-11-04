/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:35:43 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/04 09:54:29 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (src[j])
	{
		j++;
	}
	i = 0;
	while (i < size - 1 && src[i] && size > 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (j);
}
