/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:20:33 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/12 23:37:46 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1len;
	int		s2len;
	int 	t_len;
	int		i;
	int		j;
	char	*ptr;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	t_len = s1len + s2len + 1;
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	j = 0;
	if (t_len == 0)
		return (0);
	while (i <= t_len)
	{
		if (*s1)
			ptr[i] = s1[j];
		if (*s2)
			ptr[i + s1len] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}