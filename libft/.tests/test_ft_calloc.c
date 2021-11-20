/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/05 12:17:01 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "../ft_calloc.c"

void	test_regular_fnc(int size, int sizeType)
{
	void	*pnt;
	int		i;

	i = 0;
	if (sizeType == 0) {
		pnt = calloc(size, sizeof(int));
		while (i < size)
		{
			printf("%d", ((int *)pnt)[i]);
			i++;
		}
	}
	else if (sizeType == 1) {
		pnt = calloc(size, sizeof(char));
		while (i < size)
		{
			printf("%d", ((char *)pnt)[i]);
			i++;
		}
	}
	printf("%c", '\n');
}

void	test_ft_fnc(int size, int sizeType)
{
	void	*pnt;
	int		i;

	i = 0;
	if (sizeType == 0) {
		pnt = ft_calloc(size, sizeof(int));
		while (i < size)
		{
			printf("%d", ((int *)pnt)[i]);
			i++;
		}
	}
	else if (sizeType == 1) {
		pnt = ft_calloc(size, sizeof(char));
		while (i < size)
		{
			printf("%d", ((char *)pnt)[i]);
			i++;
		}
	}
	printf("%c", '\n');
}

int	main(void)
{

	printf("%s", "---- ft_calloc ----\n");

	test_regular_fnc(10, 0);
	test_ft_fnc(10, 0);

	test_regular_fnc(10, 1);
	test_ft_fnc(10, 1);

	test_regular_fnc(1, 1);
	test_ft_fnc(1, 1);

	test_regular_fnc(1, 0);
	test_ft_fnc(1, 0);

	test_regular_fnc(1, 0);
	test_ft_fnc(1, 0);

	test_regular_fnc(0, 0);
	test_ft_fnc(0, 0);

	return 0;
}