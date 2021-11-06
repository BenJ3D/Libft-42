/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/04 10:08:49 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../libft.h"
#include "../ft_memset.c"
#include "../ft_bzero.c"

void	test_regular_fnc(char	*string, int n)
{
	int	i = 0;
	int len = strlen(string);
	bzero(string, n);

	while (i < len)
	{
		printf("%d-", string[i]);
		i++;
	}
	printf("%c", '\n');
	i = 0;
	while (i < len)
	{
		printf("%c", string[i]);
		i++;
	}
	printf("%c", '\n');
}

void	test_ft_fnc(char	*string, int n)
{
	int	i = 0;
	int len = strlen(string);
	ft_bzero(string, n);

	while (i < len)
	{
		printf("%d-", string[i]);
		i++;
	}
	printf("%c", '\n');
	i = 0;
	while (i < len)
	{
		printf("%c", string[i]);
		i++;
	}
	printf("%c", '\n');
}

int	main(void)
{
	char	string1[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	string2[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	string3[] = "11xq02er4\200WYZabcFEQATZA?qQlAAPPPOdefgh9ijk*&lmnˆpkr st+vwxyFaqz";
	char	string4[] = "11xq02er4\200WYZabcFEQATZA?qQlAAPPPOdefgh9ijk*&lmnˆpkr st+vwxyFaqz";
	char	string5[] = "\127\1125fXZAaaAAq\00p0`e@[{}sFEQAGRRg\201";
	char	string6[] = "\127\1125fXZAaaAAq\00p0`e@[{}sFEQAGRRg\201";

	printf("%s", "---- ft_bzero ----\n");

	test_regular_fnc(string1, 10);
	test_ft_fnc(string2, 10);

	test_regular_fnc(string3, 10);
	test_ft_fnc(string4, 10);

	test_regular_fnc(string5, 10);
	test_ft_fnc(string6, 10);

	return 0;
}