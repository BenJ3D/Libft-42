/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/06 14:43:50 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../libft.h"
#include "../ft_memcpy.c"
#include "../ft_memmove.c"

void	mvtest_regular_fnc(char	*restrict dst, char *restrict src,	int n)
{
	int		i;
	void	*pnt;

	pnt = memmove(dst, src, n);

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
	printf("%s", (char *)pnt);
	printf("%c", '\n');
	printf("%c", '\n');
}

void	mvtest_ft_fnc(char	*restrict dst, char *restrict src,	int n)
{
	int		i;
	void	*pnt;

	pnt = ft_memmove(dst, src, n);

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
	printf("%s", (char *)pnt);
	printf("%c", '\n');
	printf("%c", '\n');
}

int	main(void)
{
	char	src1mv[] = "salut";
	char	src2[] = "salut";

	char	dest1mv[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest2mv[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	mvdest4[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	mvdest5[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest6mv[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest7mv[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	printf("%s", "---- ft_memmove ----\n");

	mvtest_regular_fnc(dest1mv, src1mv, 4);
	mvtest_ft_fnc(dest2mv, src2, 4);

	mvtest_regular_fnc(mvdest4+2, mvdest4+20, 10);
	mvtest_ft_fnc(mvdest5+2, mvdest5+20, 10);

	mvtest_regular_fnc(dest6mv+20, dest6mv+2, 10);
	mvtest_ft_fnc(dest7mv+20, dest7mv+2, 10);

	return 0;
}