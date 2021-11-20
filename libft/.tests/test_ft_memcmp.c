/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/03 17:33:40 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../libft.h"
#include "../ft_memcmp.c"

void	test_regular_fnc(void *s1, void *s2, size_t n)
{
	printf("%d", memcmp(s1, s2, n));
	printf("%c", '\n');
}

void	test_ft_fnc(void *s1, void *s2, size_t n)
{
	printf("%d", ft_memcmp(s1, s2, n));
	printf("%c", '\n');
}

int	main(void)
{
	char	mem0[] = "FSLKQPKZXMWEF";
	char	mem1[] = "FSLKQPKZXMWEX";
	char	mem2[] = "ZXQLKFEWEFSAOQWF";
	int		mem3[] = {150,4640,843,409,101154,2154};
	int		mem4[] = {150,4640,0025,68,9944,3588,549,224,6898,1,0,8};
	char	mem5[] = "";

	printf("%s", "---- ft_memcmp ----\n");

	test_regular_fnc(mem0, mem1, sizeof(char)*12);
	test_ft_fnc(mem0, mem1, sizeof(char)*12);
	test_regular_fnc(mem0, mem1, sizeof(char)*13);
	test_ft_fnc(mem0, mem1, sizeof(char)*13);

	test_regular_fnc(mem1, mem2, sizeof(char)*17);
	test_ft_fnc(mem1, mem2, sizeof(char)*17);

	test_regular_fnc(mem2, mem3, sizeof(char)*17);
	test_ft_fnc(mem2, mem3, sizeof(char)*17);

	test_regular_fnc(mem3, mem3, sizeof(int)*5);
	test_ft_fnc(mem3, mem3, sizeof(int)*5);

	test_regular_fnc(mem3, mem4, sizeof(int)*5);
	test_ft_fnc(mem3, mem4, sizeof(int)*5);

	test_regular_fnc(mem3, mem4, sizeof(int)*2);
	test_ft_fnc(mem3, mem4, sizeof(int)*2);

	test_regular_fnc(mem3, mem4, sizeof(int)*3);
	test_ft_fnc(mem3, mem4, sizeof(int)*3);

	test_regular_fnc(mem5, mem5, sizeof(int)*0);
	test_ft_fnc(mem5, mem5, sizeof(int)*0);

	return 0;
}