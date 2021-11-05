/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/03 16:44:07 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../libft.h"
#include "../ft_memchr.c"

void	test_regular_fnc(int *a, int c, size_t n)
{
	printf("%p", memchr(a, c, n));
	printf("%c", '\n');
}

void	test_ft_fnc(int *a, int c, size_t n)
{
	printf("%p", ft_memchr(a, c, n));
	printf("%c", '\n');
}

int	main(void)
{
	int		memblck1[] = {10, 5, 9, 3, 100};
	int		memblck2[] = {};

	printf("%s", "---- ft_memchr ----\n");

	test_regular_fnc(memblck1, 5454, 5*sizeof(int));
	test_ft_fnc(memblck1, 5454, 5*sizeof(int));

	test_regular_fnc(memblck1, 10, 5*sizeof(int));
	test_ft_fnc(memblck1, 10, 5*sizeof(int));

	test_regular_fnc(memblck1, 100, 5*sizeof(int));
	test_ft_fnc(memblck1, 100, 5*sizeof(int));

	test_regular_fnc(memblck2, 99, 5*sizeof(int));
	test_ft_fnc(memblck2, 99, 5*sizeof(int));

	test_regular_fnc(memblck2, 99, 0);
	test_ft_fnc(memblck2, 99, 0);

	return 0;
}