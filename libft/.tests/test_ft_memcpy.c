/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/04 16:22:06 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../ft_memcpy.c"

void	test_regular_fnc(char	*restrict dst, char *restrict src,	int n)
{
	int		i;
	void	*pnt;

	pnt = memcpy(dst, src, n);

	i = 0;
	while (i < n)
	{
		printf("%d", dst[i]);
		i++;
	}
	printf("%c", '\n');
	i = 0;
	while (i < n)
	{
		printf("%c", dst[i]);
		i++;
	}
	printf("%c", '\n');
	printf("%pt", pnt);
	printf("%c", '\n');
}

void	test_ft_fnc(char	*restrict dst, char *restrict src,	int n)
{
	int		i;
	void	*pnt;

	pnt = ft_memcpy(dst, src, n);

	i = 0;
	while (i < n)
	{
		printf("%d", dst[i]);
		i++;
	}
	printf("%c", '\n');
	i = 0;
	while (i < n)
	{
		printf("%c", dst[i]);
		i++;
	}
	printf("%c", '\n');
	printf("%pt", pnt);
	printf("%c", '\n');
}

int	main(void)
{
	char	dest1[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest2[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	src1[] = "salut";
	char	src2[] = "salut";

	char	dest3[] = "AB";
	char	dest4[] = "AB";
	char	src3[] = "les amis";
	char	src4[] = "les amis";

	// char	dest5[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	// char	dest6[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";

	printf("%s", "---- ft_memcpy ----\n");

	test_regular_fnc(dest1, src1, 5);
	test_ft_fnc(dest2, src2, 5);

	test_regular_fnc(dest3, src3, 3);
	test_ft_fnc(dest4, src4, 3);

	// test_regular_fnc(dest5+2, dest5+1, 10);
	// test_ft_fnc(dest6+2, dest6+1, 10);

	return 0;
}