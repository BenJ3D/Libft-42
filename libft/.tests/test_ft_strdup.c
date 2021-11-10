/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/09 17:21:54 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "../ft_strlen.c"
#include "../ft_calloc.c"
#include "../ft_strdup.c"

void	test_regular_fnc(char *src)
{
	char	*copy;

	copy = strdup(src);
	printf("%s", copy);
	printf("%c", '\n');
}

void	test_ft_fnc(char *src)
{
	char	*copy;

	copy = ft_strdup(src);
	printf("%s", copy);
	printf("%c", '\n');
}

int	main(void)
{

	printf("%s", "---- ft_strdup ----\n");

	char	string1[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	string2[] = "A";
	char	string3[] = "Te\200st";
	char	string4[] = "Te\0st";
	char	string5[] = "";

	test_regular_fnc(string1);
	test_ft_fnc(string1);

	test_regular_fnc(string2);
	test_ft_fnc(string2);

	test_regular_fnc(string3);
	test_ft_fnc(string3);

	test_regular_fnc(string4);
	test_ft_fnc(string4);

	test_regular_fnc(string5);
	test_ft_fnc(string5);

	return 0;
}