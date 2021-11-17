/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:00:06 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/17 19:02:13 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static char *split_malloc(char **ptr, int start)
{
	return (NULL);
}
static int	is_sep(char const c, char sep)   // FT ok
{
	if (c == sep)
		return (1);
	return (0);
}

static int	size_to_sep(char const *str, int start, char sep)
{
	while (is_sep(str[start], sep) != 1)
		start++;
	return (start);
}

static int	word_size(char const *str, int start, char sep)
{
	return (0);
}
// static int	size_to_sep(char const *str, int start, char sep)
// {
// 	int	i;

// 	i = start;
// 	while (str[i] != sep)
// 		i++;
// 	return (i);
// }

static int	count_sep(char const *s, char sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == sep && s[i + 1] != '\0' && s[i + 1] != sep)
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	size_t	i; // timeline
	size_t	j; // size du split
	size_t	n; // numero splits
	size_t	nword; // nombre de mot
	char	**tab_split;

	nword = (count_sep(s, c));
	tab_split = (char **)malloc(sizeof(char *) * (nword + 1));
	if (!tab_split)
		return (NULL);
	printf("====>>%zu debug nbr de mots a split \n ", nword);
	i = 0;
	n = 0;
	j = 0;
	printf ("%zu nword\n", nword);
	// while (s[i] && n <= nword)
	// {
	// 	while (is_sep(s[i], c) == 1)   //passer les sep et etre sur un char valide
	// 		i++;
	// 	j = size_to_sep(s, i, c); 
	// 	tab_split[n] = ft_substr(s, i, j);  //sub>> string, start, len
	// 	while (is_sep(s[i], c) != 1)
	// 		i++;

	// 	n++;
	// }
	while (s[i] && n <= nword)
	{
		j = size_to_sep(s, i, c);
		printf ("%zu i timeline // %zu j word len \n", i, j);
		while (is_sep(s[i], c) == 0)
			i++;
		tab_split[n] = ft_substr(s, i, j);  //sub>> string, start, len
		i = i + j;
		n++;
	}
	tab_split[n] = (char *)'\0';
	return (tab_split);
 }

int main()
{
	int j;
	char **str;
	char sep = ' ';

	j = 0;
	str = ft_split("      coucou je suis split. si je marche je suis la deuxieme ligne je suis insuportable", sep);
	//printf ("%s", str[1]);
	while(str[j])
		printf("===%s\n", str[j++]);
	free(str);

	//printf("\n\n\noutput normal : \n===coucou je suis split\n=== si je marche je suis la deuxieme ligne \n=== je suis insuportable \n===je marche 1 fois sur deux \n=== je suis une nouvelle ligne \n=== en vrai si tu me rentre en premiere piscine c est pas mal \n=== je tombe aussi en exam btw \n=== faut aussi me test avec des charset vide \n=== bon je te laisse bonne chance pour la piscine frero");
}
