/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/05 10:16:08 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../ft_strlen.c"
#include "../ft_strlcat.c"

void	test_regular_fnc(char	*dest, char *src, unsigned int size)
{
	int len = strlcat(dest, src, size);

	printf("%s", dest);
	printf("%c", '\n');
	printf("--len: %d", len);
	printf("%c", '\n');
}

void	test_ft_fnc(char	*dest, char *src, unsigned int size)
{
	int len = ft_strlcat(dest, src, size);

	printf("%s", dest);
	printf("%c", '\n');
	printf("--len: %d", len);
	printf("%c", '\n');
}

int	main(void)
{
	char	src1[] = "1234567890";
	char	src2[] = "1234567890OXOAPLZLKQWMMZNXMNNEJWEKJKJWEKLDIOQEJRHEWALKAQQ";

	char	dest1[100] = "1BCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest2[100] = "2BCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest3[100] = "2BCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest4[100] = "2BCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";

	printf("%s", "---- ft_strlcat ----\n");

	test_regular_fnc(dest1, src1, 5);
	test_ft_fnc(dest2, src1, 5);
	test_regular_fnc(dest1, src1, 55);
	test_ft_fnc(dest2, src1, 55);
	test_regular_fnc(dest1, src1, 90);
	test_ft_fnc(dest2, src1, 90);
	test_regular_fnc(dest3, src2, 100);
	test_ft_fnc(dest4, src2, 100);

	return 0;
}