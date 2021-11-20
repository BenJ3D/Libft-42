/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitold.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:00:06 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/19 13:27:48 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	is_sep(char const c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

static void	free_all(char k, char **s_splited) //flo
{
	int	i;

	i = 0;
	while (i < k)
	{
		free(s_splited[i]);
		i++;
	}
	free(s_splited);
}

static int	size_to_next_sep(char const *str, size_t start, char sep)
{
	int	i;
	int	j;

	i = 0;
	while (is_sep(str[start], sep) == 0 && str[start] != '\0')
	{
		start++;
		i++;
	}

	if (n < nword) ///////-----
			j = i; 
		tab_split[n] = ft_substr(s, i, j);
		if (!tab_split[n])
		{
			free_all(c, tab_split);
			return (0);
		}
	return (i);
}

static int	count_word(char const *str, char sep)    // github master
{
	int nb;
	int i;

	nb = 0;
	i = 0;
	while (*str)
	{
		if (*str != sep && i == 0)
		{
			i = 1;
			nb++;
		}
		else if (*str == sep)
			i = 0;
		str++;
	}
	return (nb);
}
static char	**malloc_main(char const *s, char c)
{
	char	**tab_split; 
	size_t	nword; // nombre de motS

	if (!s)
		return (0);
	nword = (count_word(s, c));
	tab_split = (char **)malloc(sizeof(char *) * (nword + 1));
	if (!tab_split)
		return (0);
	return (tab_split);
}

char	**ft_split(char const *s, char c)
{
	size_t	i; // timeline
	size_t	j; // size du split
	size_t	n; // numero splits
	size_t	nword; // nombre de mot
	char	**tab_split; 

	tab_split = malloc_main(s, c);
	 nword = (count_word(s, c));
	i = 0;
	n = 0;
	j = 0;
	while (s[i] && n < nword)
	{
		while (is_sep(s[i], c) == 1)
			i++;
		if (n < nword)
			j = size_to_next_sep(s, i, c); 
		tab_split[n] = ft_substr(s, i, j);
		if (!tab_split[n])
		{
			free_all(c, tab_split);
			return (0);
		}
	 while (s[i] && is_sep(s[i], c) != 1)
		 	i++;
		n++;
	}
	tab_split[n] = 0;
	return (tab_split); 
}

// int main()
// {
// 	int j;
// 	char **str;

// 	j = 0;
// 	//str = ft_split(".....aa.a..........\0aa\0bbb", '.');
// 	str = ft_split("....Coucou.je.suis.split.....et...ça....doit.faire.24h.que.je.suis.....dessus.fin..", '.');
// 	//printf ("%s", str[1]);
// 	while(str[j])
// 		printf("===%s\n", str[j++]);
// 	free(str);

// 	//printf("\n\n\noutput normal : \n===coucou je suis split\n=== si je marche je suis la deuxieme ligne \n=== je suis insuportable \n===je marche 1 fois sur deux \n=== je suis une nouvelle ligne \n=== en vrai si tu me rentre en premiere piscine c est pas mal \n=== je tombe aussi en exam btw \n=== faut aussi me test avec des sep vide \n=== bon je te laisse bonne chance pour la piscine frero");
// }
