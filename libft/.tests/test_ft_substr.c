/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/11 17:55:10 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../ft_calloc.c"
#include "../ft_strlen.c"
#include "../ft_strlcpy.c"
#include "../ft_substr.c"
#include "../libft.h"

void	test_ft_fnc(char	*s, int	start, int	len)
{
	char	*s1;

	s1 = ft_substr(s, start, len);
	printf("%s", s1);
	printf("%c", '\n');
}

int	main(void)
{
	char s1[] = "nord-corea, corea is the futur";
	char s2[] = "01234";
	char s3[] = "lorem ipsum dolor sit amet";
	char s4[] = "tripouille";

	printf("%s", "---- ft_substr ----\n");
	test_ft_fnc(s1, 5, 5);
	test_ft_fnc(s2, 10, 10);
	test_ft_fnc(s3, 400, 20);
	test_ft_fnc(s4, 0, 42);
	test_ft_fnc(s4, 1, 1);

	return (0);
}
