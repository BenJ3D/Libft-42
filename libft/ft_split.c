/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:00:06 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/16 23:06:55 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_to_sep(char const *str, char sep)
{
	int	i;

	while (str[i] != sep)
		i++;
	return (i);
}

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
	int		i;
	int		j;
	char	**tab_split;
	char	*tmp;

	i = 0;
	tab_split = (char **)malloc(sizeof(char *) * ((count_sep(s, c) + 1)));
	printf ("====>>%d\n", (count_sep(s, c) + 1));
	while (s[i])
	{
		*tab_split = (char *)malloc(sizeof(char *) * (size_to_sep(s[i]) + 1));  // comment malloc poru chaque split
		j = 0;
		tmp[j] = s[i];
		i = size_to_sep(s[i]);
		i++;
		*tab_split[wd] = tmp;
	}
	return (tab_split);
}

#include <stdio.h>
int main()
{
	int j;
	char **str;
	char sep = ' ';


	j  = 0;
	str = ft_split("coucou je suis split. si je marche je suis la deuxieme ligne je suis insuportable", sep);

	// while(str[j])
	// 	printf("===%s\n", str[j++]);
	// free(str);

	//printf("\n\n\noutput normal : \n===coucou je suis split\n=== si je marche je suis la deuxieme ligne \n=== je suis insuportable \n===je marche 1 fois sur deux \n=== je suis une nouvelle ligne \n=== en vrai si tu me rentre en premiere piscine c est pas mal \n=== je tombe aussi en exam btw \n=== faut aussi me test avec des charset vide \n=== bon je te laisse bonne chance pour la piscine frero");
}
