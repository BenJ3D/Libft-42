/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/04 10:59:14 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../ft_strlen.c"
#include "../ft_calloc.c"
#include "../ft_strdup.c"
#include "../ft_strjoin.c"
#include "../ft_strlcat.c"
#include "../ft_memcpy.c"
#include "../ft_memmove.c"
#include "../libft.h"

void	test_ft_fnc(char	*s1, char	*s2)
{
	char	*s3;

	s3 = ft_strjoin(s1, s2);
	printf("%s", s3);
	printf("%c", '\n');
}

int	main(void)
{
	char s1[] = "I want to go ";
	char s2[] = "to nord-corea, corea is the futur";

	printf("%s", "---- ft_strjoin ----\n");
	test_ft_fnc(s1, s2);
	return (0);
}
