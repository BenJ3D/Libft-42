/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falonso <falonso@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/03 10:44:09 by falonso          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../libft.h"
#include "../ft_tolower.c"

void	test_regular_fnc(char	*string)
{
	int		i;

	i = 0;
	while (string[i])
	{
		i++;
		printf("%c", tolower(string[i]));
	}
	printf("%c", '\n');
}

void	test_ft_fnc(char	*string)
{
	int		i;

	i = 0;
	while (string[i])
	{
		i++;
		printf("%c", ft_tolower(string[i]));
	}
	printf("%c", '\n');
}

int	main(void)
{
	char	string1[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	string2[] = "11xq02er4\200WYZabcFEQATZA?qQlAAPPPOdefgh9ijk*&lmnˆpkr st+vwxyFaqz";
	char	string3[] = "\127\1125fXZAaaAAq\00p0`e@[{}sFEQAGRRg\201";

	printf("%s", "---- ft_tolower ----\n");

	test_regular_fnc(string1);
	test_ft_fnc(string1);

	test_regular_fnc(string2);
	test_ft_fnc(string2);

	test_regular_fnc(string3);
	test_ft_fnc(string3);

	return 0;
}