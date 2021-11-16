/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/03 14:29:11 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../ft_memset.c"

void	test_regular_fnc(void *a, int c, size_t n, int t)
{
	void	*pnt;

	pnt = memset(a, c, n);

	int i = 0;
	if (t == 0)
	{
		while (((int *) a)[i])
		{
			printf("%d",((int *) a)[i]);
			printf("%c", '-');
			i++;
		}
	}
	else if (t == 1)
	{
		printf("%s", (char *)a);
	}
	printf("%c", '\n');
}

void	test_ft_fnc(void *a, int c, size_t n, int t)
{
	void	*pnt;

	pnt = ft_memset(a, c, n);

	int i = 0;
	if (t == 0)
	{
		while (((int *) a)[i])
		{
			printf("%d",((int *) a)[i]);
			printf("%c", '-');
			i++;
		}
	}
	else if (t == 1)
	{
		printf("%s", (char *)a);
	}
	printf("%c", '\n');
}

int	main(void)
{
	char	string1[] = "0123456789";
	char	string2[] = "0123456789";

	char	string3[] = "0123456789";
	char	string4[] = "0123456789";

	int		int1[] = {10, 5, 9 ,3, 0};
	int		int2[] = {10, 5, 9 ,3, 0};

	printf("%s", "---- ft_memset ----\n");

	test_regular_fnc(string1, '*', 4, 1);
	test_ft_fnc(string2, '*', 4, 1);

	test_regular_fnc(string3 + 2, '*', 4, 1);
	test_ft_fnc(string4 + 2, '*', 4, 1);

	test_regular_fnc(int1, 1, 2, 0);
	test_ft_fnc(int2, 1, 2, 0);

	return 0;
}