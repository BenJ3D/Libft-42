/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:35:43 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/03 22:24:53 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

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

#include <stdio.h>
#include <string.h>
int	main()
{
	char tab [] = "coucou les zouzous et";
	char tab2 [22];
	char tab3 [22];

	printf("%s\n", tab);
	ft_strlcpy(tab2, tab, 12);
	printf("%s\n", tab2);
	// strlcpy(tab3, tab, 12);
	// printf("%s\n", tab3);

}
