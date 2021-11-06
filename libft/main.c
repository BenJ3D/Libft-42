/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:51:43 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/06 17:10:14 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

// /*fonctions pour changer couleur des print f*/
void red () { printf("\033[1;31m"); }
void yellow () { printf("\033[1;33m"); }
void green (){  printf("\033[0;32m");}
void blue (){  printf("\033[0;34m");}
void black (){  printf("\033[0;30m");}
void purple (){  printf("\033[1;35m");}
void cyan (){  printf("\033[0;36m");}
void white (){  printf("\033[0;37m");}
void reset (){  printf("\033[0m");}
/* complet with main's falanso */
void	mvtest_regular_fnc(char	*restrict dst, char *restrict src,	int n)
{
	int		i;
	void	*pnt;

	pnt = memmove(dst, src, n);

	i = 0;
	while (i < n)
	{
		printf("%d", dst[i]);
		i++;
	}
	printf("%c", '\n');
	i = 0;
	while (i < n)
	{
		printf("%c", dst[i]);
		i++;
	}
	printf("%c", '\n');
	printf("%pt", pnt);
	printf("%c", '\n');
	printf("%s", (char *)pnt);
	printf("%c", '\n');
	printf("%c", '\n');
}

void	mvtest_ft_fnc(char	*restrict dst, char *restrict src,	int n)
{
	int		i;
	void	*pnt;

	pnt = ft_memmove(dst, src, n);

	i = 0;
	while (i < n)
	{
		printf("%d", dst[i]);
		i++;
	}
	printf("%c", '\n');
	i = 0;
	while (i < n)
	{
		printf("%c", dst[i]);
		i++;
	}
	printf("%c", '\n');
	printf("%pt", pnt);
	printf("%c", '\n');
	printf("%s", (char *)pnt);
	printf("%c", '\n');
	printf("%c", '\n');
}
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
void	test_regular_fnc(char	*string, char	c)
{
	printf("%s", strrchr(string, c));
	printf("%c", '\n');
}

void	test_ft_fnc(char	*string, char	c)
{
	printf("%s", ft_strrchr(string, c));
	printf("%c", '\n');
}
/* main pour tester toute la libft */
int main()
{
	purple ();	
	printf("------------------\n");
	cyan ();
	printf("main libft \n\n");
	red ();
	printf("NOM FONCTION\n"); 
	green ();
	printf("resultat fonction d'origine\n");
	reset ();
	printf("resultat votre fonction ft_*\n");

	char alnum [] = "aB3! ";
	purple ();	
	printf("------------------\n------------------\n");
	red ();
	printf("ISALNUM\n"); 
	green ();
	printf ("%d%d%d%d%d\n", isalnum(alnum[0]), isalnum(alnum[1]), isalnum(alnum[2]), isalnum(alnum[3]), isalnum(alnum[4]));
	reset ();
	printf ("%d%d%d%d%d\n", ft_isalnum(alnum[0]),ft_isalnum(alnum[1]),ft_isalnum(alnum[2]),ft_isalnum(alnum[3]),ft_isalnum(alnum[4]));
	purple ();	
	printf("------------------\n");
	red ();
	printf("ISASCII\n");
	reset ();
	int isas [] = {-1, 0, 42, 110, 255};
	green ();
	printf("%d", isascii(isas[0]));
	printf("%d", isascii(isas[1]));
	printf("%d", isascii(isas[2]));
	printf("%d", isascii(isas[3]));
	printf("%d\n", isascii(isas[4]));
	reset();
	printf("%d", ft_isascii(isas[0]));
	printf("%d", ft_isascii(isas[1]));
	printf("%d", ft_isascii(isas[2]));
	printf("%d", ft_isascii(isas[3]));
	printf("%d\n", ft_isascii(isas[4]));
	
	purple ();	
	printf("------------------\n");
	red ();
	printf("ISPRINT\n");
	reset ();
	int isprt [] = {31, 32, 126, 217, -4};
	green ();
	printf("%d", isprint(isprt[0]));
	printf("%d", isprint(isprt[1]));
	printf("%d", isprint(isprt[2]));
	printf("%d", isprint(isprt[3]));
	printf("%d\n", isprint(isprt[4]));
	reset();
	printf("%d", ft_isprint(isprt[0]));
	printf("%d", ft_isprint(isprt[1]));
	printf("%d", ft_isprint(isprt[2]));
	printf("%d", ft_isprint(isprt[3]));
	printf("%d\n", ft_isprint(isprt[4]));
	
	purple ();	
	printf("------------------\n");
	red ();
	printf("STRLEN\n");
	reset ();
	char stln [] = "Bonjour je fais 23 char";
	green ();
	printf("%lu\n", strlen(stln));
	reset ();
	printf("%lu\n", ft_strlen(stln));

	purple ();	
	printf("------------------\n");
	red ();
	printf("MEMSET\n");
	reset ();
	char tab [] = "Coucou";
	char tab2 [] = "Coucou";
	printf("%s\n", tab);
	ft_memset(tab, 33, 3);
	green ();
	memset(tab2, 33, 3);
	printf("=======>>>>>>> %s\n", tab2);
	reset ();
	printf("=======>>>>>>> %s\n", tab);

	purple ();	
	printf("------------------\n");
	red ();
	printf("BZERO\n");
	reset ();
	char zz [] = "Coucou";
	printf("%s\n", zz);
	ft_bzero(zz, 3);
	green();
	printf("%s\n", "cou");
	reset();
	printf("%s\n", zz+3);
	red();
	printf("%s%s%s", zz, zz+1, zz+2);
	green();
	printf("        <<<<==== doit etre vide\n");

	purple ();	
	printf("------------------\n");
	red ();
	printf("MEMCPY\n");
	reset ();
	char cp1 [] = "Hello World!";
	char desta1[50];
	char destb1[13];
	printf("%s\n", cp1);

	green ();
	printf("%s\n",	memcpy(desta1, cp1, 5));
	reset();
	printf("%s\n", ft_memcpy(destb1, cp1, 5));
	
purple ();	
	printf("------------------\n");
	red ();
	printf("MEMMOVE\n");
	reset ();
char	src1mv[] = "salut";
	char	src2[] = "salut";

	char	dest1mv[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest2mv[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	mvdest4[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	mvdest5[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest6mv[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	char	dest7mv[] = "ABCDEFHIJKLMNOPQRSTUVWYZabcdefghijklmnopkrstuvwxyz";
	printf("%s", "---- ft_memmove ----\n");
	green ();
	mvtest_regular_fnc(dest1mv, src1mv, 4);
	reset ();
	mvtest_ft_fnc(dest2mv, src2, 4);
	green ();
	mvtest_regular_fnc(mvdest4+2, mvdest4+20, 10);
	reset ();
	mvtest_ft_fnc(mvdest5+2, mvdest5+20, 10);
	green ();
	mvtest_regular_fnc(dest6mv+20, dest6mv+2, 10);
	reset ();
	mvtest_ft_fnc(dest7mv+20, dest7mv+2, 10);



purple ();	
	printf("------------------\n");
	red ();
	printf("STRLCPY\n");
	reset ();
	char lcpy [] = "Salut je dois me stop au 12eme char";
	char lcpy2 [50];
	char lcpy3 [50];

	printf("%s\n", lcpy);
	green ();
	strlcpy(lcpy3, lcpy, 22);
	printf("%s\n", lcpy3);
	reset ();
	ft_strlcpy(lcpy2, lcpy, 22);
	printf("%s\n", lcpy2);

	purple ();	
	printf("------------------\n");
	red ();
	printf("STRCHR\n");
	reset ();
	char chr1 [] = "Salut g les gens";
	char x = 'g';	
	printf("%s\n", chr1);
	green ();
	printf("%s\n", strchr(chr1, x));
	printf("%s\n", strchr("Hello world g my name g is ben", x));
	reset ();
	printf("%s\n", ft_strchr(chr1, x));
	printf("%s\n", ft_strchr("Hello world g my name g is ben", x));

	purple ();	
	printf("------------------\n");
	red ();
	printf("STRRCHR\n");
	reset ();
	char chrr1 [] = "Salut g les gens";
	char x2 = 'g';	
	printf("%s\n", chrr1);
	green ();
	printf("%s\n", strrchr(chrr1, x2));
	printf("%s\n", strrchr("Hello world g my name g is ben", x2));
	reset ();
	printf("%s\n", ft_strrchr(chrr1, x2));
	printf("%s\n", ft_strrchr("Hello world g my name g is ben", x2));
	
char	string1[] = "0123456789";
	char	string2[] = "A8BCDEF3IJKLMNOPQRSTU\200WYZabcdefgh9ijk*&lmnˆpkr st+vwxyz";
	char	string3[] = "\127\1125feq\00p0`e@[{}sqg\201";
	char	string4[] = "00\000ef/*qeq:|+-2";
	char	string5[] = "ef/*qeq:|+-2";
	char	string6[] = "\001\040\200\176\177\300\050fzlk1080735cf,..,zqewr!";
	green ();
	test_regular_fnc(string1, '6');
	reset ();
	test_ft_fnc(string1, '6');

	green ();
	test_regular_fnc(string1, 'x');
	reset ();
	test_ft_fnc(string1, 'x');
	green ();
	test_regular_fnc(string2, '\200');
	reset ();
	test_ft_fnc(string2, '\200');
	green ();
	test_regular_fnc(string3, '\112');
	reset ();
	test_ft_fnc(string3, '\112');
	green ();
	test_regular_fnc(string4, '0');
	reset ();
	test_ft_fnc(string4, '0');
	green ();
	test_regular_fnc(string5, 'e');
	reset ();
	test_ft_fnc(string5, 'e');
	green ();
	test_regular_fnc(string6, 0);
	reset ();
	test_ft_fnc(string6, 0);

purple ();	
	printf("------------------\n");
	red ();
	printf("STRNCMP\n");
	reset ();
	char	stringstrncmp1[] = "01234567890";
	char	stringstrncmp2[] = "01234567895";
	char	stringstrncmp3[] = "Salut Bob !";
	char	stringstrncmp4[] = "Youlo Bob !";
	char	stringstrncmp5[] = "";
	char	stringstrncmp6[] = "Pifpaf";

	green ();
	test_regular_fncstrncmp(stringstrncmp1, stringstrncmp2, 10);
	reset ();
	test_ft_fncstrncmp(stringstrncmp1, stringstrncmp2, 10);
	green ();
	test_regular_fncstrncmp(stringstrncmp1, stringstrncmp2, 11);
	reset ();
	test_ft_fncstrncmp(stringstrncmp1, stringstrncmp2, 11);
	green ();
	test_regular_fncstrncmp(stringstrncmp3, stringstrncmp4, 10);
	reset ();
	test_ft_fncstrncmp(stringstrncmp3, stringstrncmp4, 10);
	green ();
	test_regular_fncstrncmp(stringstrncmp5, stringstrncmp6, 10);
	reset ();
	test_ft_fncstrncmp(stringstrncmp5, stringstrncmp6, 10);
	green ();
	test_regular_fncstrncmp(stringstrncmp5, stringstrncmp5, 10);
	reset ();
	test_ft_fncstrncmp(stringstrncmp5, stringstrncmp5, 10);

	purple ();	
	printf("------------------\n");
	red ();
	printf("MEMCHR\n");
	reset ();
	char chr1mm [] = "Salut g les gens";
	char xmm = 'g';	
	printf("%s\n", chr1mm);
	green ();
	printf("%s\n", memchr(chr1mm, xmm, 10000*sizeof(int)));
	printf("%s\n", memchr("Hello world g my name g is ben", xmm, 10000*sizeof(int)));
	reset ();
	printf("%s\n", ft_strchr(chr1mm, xmm));
	printf("%s\n", ft_strchr("Hello world g my name g is ben", xmm));
	 char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const unsigned int size = 10;
printf("\n");
	green ();
    // On recherche une valeur inhéxistante :
    void * found2 = memchr( data, 57, size );
    printf( "57 is %s\n", ( found2 != NULL ? "found" : "not found" ) );

    // On recherche une valeur existante :
    found2 = memchr( data, 50, size );
    printf( "50 is %s\n", ( found2 != NULL ? "found" : "not found" ) );
    if ( found2 != NULL ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found2) );
    }
printf("\n");
	reset ();
 // On recherche une valeur inhéxistante :
    void * found = ft_memchr( data, 57, size );
    printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );

    // On recherche une valeur existante :
    found = ft_memchr( data, 50, size );
    printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
    if ( found != NULL ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found) );
    }

purple ();	
	printf("------------------\n");
	red ();
	printf("MEMCMP\n");
	reset ();
	char cmpv1[] = "salut";
	char cmpv2[] = "salut";	
	char cmpv3[] = "saLut";
	char cmpv4[] = "salut";	
	char cmpv5[] = "salut";
	char cmpv6[] = "saLut";
	char cmpv7[] = "sal\200ut";
	char cmpv8[] = "sal\0ut";	

		green ();
	printf ("%d\n", memcmp(cmpv1, cmpv2, 4));
	reset ();
	printf ("%d\n", ft_memcmp(cmpv1, cmpv2, 4));
		green ();
	printf ("%d\n", memcmp(cmpv3, cmpv4, 4));
	reset ();
	printf ("%d\n", ft_memcmp(cmpv3, cmpv4, 4));
		green ();
	printf ("%d\n", memcmp(cmpv5, cmpv6, 4));
	reset ();
	printf ("%d\n", ft_memcmp(cmpv5, cmpv6, 4));
		green ();
	printf ("%d\n", memcmp(cmpv7, cmpv8, 4));
	reset ();
	printf ("%d\n", ft_memcmp(cmpv7, cmpv8, 4));
	


}


