/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:32 by falonso           #+#    #+#             */
/*   Updated: 2021/11/06 10:56:42 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <ctype.h>
#include "../ft_strncmp.c"

void	test_regular_fncstrncmp(char	*stringstrncmp1, char	*stringstrncmp2, int size)
{
	printf("%d", strncmp(stringstrncmp1, stringstrncmp2, size));
	printf("%c", '\n');
}

void	test_ft_fncstrncmp(char	*stringstrncmp1, char	*stringstrncmp2, int size)
{
	printf("%d", ft_strncmp(stringstrncmp1, stringstrncmp2, size));
	printf("%c", '\n');
}

int	main(void)
{
	char	stringstrncmp1[] = "01234567890";
	char	stringstrncmp2[] = "01234567895";
	char	stringstrncmp3[] = "Salut Bob !";
	char	stringstrncmp4[] = "Youlo Bob !";
	char	stringstrncmp5[] = "";
	char	stringstrncmp6[] = "Pifpaf";

	printf("%s", "---- ft_strncmp ----\n");

	test_regular_fncstrncmp(stringstrncmp1, stringstrncmp2, 10);
	test_ft_fncstrncmp(stringstrncmp1, stringstrncmp2, 10);

	test_regular_fncstrncmp(stringstrncmp1, stringstrncmp2, 11);
	test_ft_fncstrncmp(stringstrncmp1, stringstrncmp2, 11);

	test_regular_fncstrncmp(stringstrncmp3, stringstrncmp4, 10);
	test_ft_fncstrncmp(stringstrncmp3, stringstrncmp4, 10);

	test_regular_fncstrncmp(stringstrncmp5, stringstrncmp6, 10);
	test_ft_fncstrncmp(stringstrncmp5, stringstrncmp6, 10);

	test_regular_fncstrncmp(stringstrncmp5, stringstrncmp5, 10);
	test_ft_fncstrncmp(stringstrncmp5, stringstrncmp5, 10);

	return 0;
}