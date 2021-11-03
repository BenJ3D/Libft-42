libft main :

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:51:43 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/03 13:32:27 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

void red ()
{
  printf("\033[1;31m");
}
void yellow ()
{
  printf("\033[1;33m");
}
void green ()
{
  printf("\033[0;32m");
}
void blue ()
{
  printf("\033[0;34m");
}
void black ()
{
  printf("\033[0;30m");
}
void purple ()
{
  printf("\033[1;35m");
}
void cyan ()
{
  printf("\033[0;36m");
}
void white ()
{
  printf("\033[0;37m");
}
void reset ()
{
  printf("\033[0m");
}

/* main pour tester toute la libft */
int main()
{

	char alnum [] = "aB3! ";
	purple ();	
	printf("------------------\n");
	red ();
	printf("ISALNUM\n");
	green ();
	printf ("%d", isalnum(alnum[0]));
	printf ("%d", isalnum(alnum[1]));
	printf ("%d", isalnum(alnum[2]));
	printf ("%d", isalnum(alnum[3]));
	printf ("%d\n", isalnum(alnum[4]));
	reset ();
	// printf ("%d", ft_isalnum(alnum[0]));
	// printf ("%d", ft_isalnum(alnum[1]));
	// printf ("%d", ft_isalnum(alnum[2]));
	// printf ("%d", ft_isalnum(alnum[3]));
	// printf ("%d\n", ft_isalnum(alnum[4]));

	purple ();	
	printf("------------------\n");
	red ();
	printf("MEMSET\n");
	reset ();
	char tab [] = "Coucou";
	char tab2 [] = "Coucou";
	printf("%s\n", tab);
	//ft_memset(tab, 33, 3);
	green ();
	memset(tab2, 33, 3);
	printf("=======>>>>>>> %s\n", tab2);
	reset ();
	printf("=======>>>>>>> %s\n", tab);


	purple ();	
	printf("------------------\n");
	red ();
	printf("XXX-XXX\n");
	reset ();
}

/* 
Black \033[0;30m
Red \033[0;31m
Green \033[0;32m
Yellow \033[0;33m
Blue \033[0;34m
Purple \033[0;35m
Cyan \033[0;36m
White \033[0;37m
*/