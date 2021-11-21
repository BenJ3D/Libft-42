/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:00:06 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/20 15:52:28 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	is_sep(char const c, char sp)
{
	if (c == sp)
		return (1);
	return (0);
}

static char	**free_all(char **s_splited)
{
	int	i;

	i = 0;
	while (s_splited[i] == NULL)
	{
		free(s_splited[i]);
		i++;
	}
	free(s_splited);
	return (NULL);
}

static int	size_or_cntwrd(char const *s, char sp, size_t start, int b)
{
	if (b == 1)
	{
		b = 0;
		start = 0;
		while (*s)
		{
			if (*s != sp && start == 0)
			{
				start = 1;
				b++;
			}
			else if (*s == sp)
				start = 0;
			s++;
		}
		return (b);
	}
	b = 0;
	while (is_sep(s[start], sp) == 0 && s[start] != '\0')
	{
		start++;
		b++;
	}
	return (b);
}

static char	**main_malloc(size_t nword)
{
	char	**tmp;

	tmp = (char **)malloc(sizeof(char *) * (nword + 1));
	if (!tmp)
		return (0);
	return (tmp);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	n;
	size_t	nword;
	char	**tab_split;

	if (!s)
		return (0);
	nword = (size_or_cntwrd(s, c, 0, 1));
	tab_split = main_malloc(nword);
	i = 0;
	n = 0;
	while (s[i] && n < nword)
	{
		while (s[i] == c)
			i++;
		if (n < nword)
		tab_split[n] = ft_substr(s, i, size_or_cntwrd(s, c, i, 0));
		if (!tab_split[n])
			return (free_all(tab_split));
		while (s[i] && s[i] != c)
			i++;
		n++;
	}
	tab_split[n] = 0;
	return (tab_split);
}

int main()
{
	int j;
	char **s;

	j = 0;
	s = ft_split("     split       this for   me  !       ", ' ');
	//s = ft_split("....Coucou.je.suis.split.....et...ça....doit.faire.24h.que.je.suis.....dessus.fin..", '.');
	//printf ("%s", s[1]);
	while(s[j])
		printf("===%s\n", s[j++]);
	free(s);

	//printf("\n\n\noutput normal : \n===coucou je suis split\n=== si je marche je suis la deuxieme ligne \n=== je suis insuportable \n===je marche 1 fois sur deux \n=== je suis une nouvelle ligne \n=== en vrai si tu me rentre en premiere piscine c est pas mal \n=== je tombe aussi en exam btw \n=== faut aussi me test avec des sp vide \n=== bon je te laisse bonne chance pour la piscine frero");
}
