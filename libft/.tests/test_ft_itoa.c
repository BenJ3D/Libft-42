/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/04 11:52:49 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "../ft_calloc.c"
#include "../ft_itoa.c"

int	main(void)
{
	int	int1 = -52;
	int	int2 = 9;
	int	int3 = 0;
	int	int4 = -0;
	int	int5 = -69754;
	int	int6 = 98000;
	int	int7 = -287;
	int	int8 = 9870;
	int	int9 = -54200;
	int	int10 = -98;
	int	int11 = +298;
	int	int12 = 2147483647;
	int	int13 = -2147483648;

	printf("%s", "---- ft_itoa ----\n");

	printf("%s\n", ft_itoa(int1));
	printf("%s\n", ft_itoa(int2));
	printf("%s\n", ft_itoa(int3));
	printf("%s\n", ft_itoa(int4));
	printf("%s\n", ft_itoa(int5));
	printf("%s\n", ft_itoa(int6));
	printf("%s\n", ft_itoa(int7));
	printf("%s\n", ft_itoa(int8));
	printf("%s\n", ft_itoa(int9));
	printf("%s\n", ft_itoa(int10));
	printf("%s\n", ft_itoa(int11));
	printf("%s\n", ft_itoa(int12));
	printf("%s\n", ft_itoa(int13));

	return (0);
}