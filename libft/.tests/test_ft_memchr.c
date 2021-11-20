/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/11 13:42:47 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../libft.h"
#include "../ft_memchr.c"

void	test_regular_fnc(char *a, int c, size_t n)
{
	printf("%p", memchr(a, c, n));
	printf("%c", '\n');
}

void	test_ft_fnc(char *a, int c, size_t n)
{
	printf("%p", ft_memchr(a, c, n));
	printf("%c", '\n');
}

int	main(void)
{
	char		memblck1[] = {10, 5, 9, 3, 100};
	char		memblck2[] = {};
	char		memblck3[] = {0, 1, 2 ,3 ,4 ,5};

	printf("%s", "---- ft_memchr ----\n");

	test_regular_fnc(memblck1, 5454, 5);
	test_ft_fnc(memblck1, 5454, 5);

	test_regular_fnc(memblck1, 10, 5);
	test_ft_fnc(memblck1, 10, 5);

	test_regular_fnc(memblck1, 100, 5);
	test_ft_fnc(memblck1, 100, 5);

	test_regular_fnc(memblck2, 99, 5);
	test_ft_fnc(memblck2, 99, 5);

	test_regular_fnc(memblck2, 99, 0);
	test_ft_fnc(memblck2, 99, 0);

	test_regular_fnc(memblck3, 2 + 256, 3);
	test_ft_fnc(memblck3, 2 + 256, 3);

	return 0;
}