/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:29:08 by bducrocq          #+#    #+#             */
/*   Updated: 2021/11/20 15:16:43 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

#include <stdio.h>
char	*ft_strtrim(char const *s1, char const *set)
{
	int		len1;
	int		len2;
	int		start;
	int		end;
	char	*str;

	len1 = ft_strlen(s1);
	start = 0;
	while (is_set(s1[start], set) != 0)
		start++;
	end = len1;
	while (is_set(s1[end], set) != 0 && end > start)
		end--;
	//len2 = (len1 - end - start + 2);
	len2 = (len1 - start) - (len1 - end) + 1;
	str = ft_calloc(len2, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)&s1[start], len2);
	return (str);
}

// #include <stdio.h>
// int main()
// {
//   char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
// 	char *s2 = "Hello \t  Please\n Trim me !";
// 	char *ret = ft_strtrim(s1, " \n\t");

// 	if (!strcmp(ret, s2))
// 		puts("TEST_SUCCESS");
// 	puts(ret);
    
// }

// #include "libft.h"

// static char	is_set(char c, const char *set)
// {
// 	int	i;

// 	i = 0;
// 	while (set[i])
// 	{
// 		if (c == set[i])
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// #include <stdio.h>
// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	i;
// 	size_t	start;
// 	size_t	end;
// 	char	*str;

// 	// if (!s1)
// 	// 	return (0);
// 	start = 0;
// 	while (is_set(s1[start], set) != 0)
// 		start++;
// 	end = ft_strlen(s1);
// 	while (is_set(s1[end], set) != 0 && end > start)
// 		end--;
// 	i = ft_strlen(s1);
// 	str = ft_calloc((ft_strlen(s1) - (start + end) + 2), sizeof(char));
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	while (i < end && start < end)
// 		{
// 			str[i++] = s1[start++];
// 			// printf("%zu %zu %zu %c\n", i, start, end, str[i - 1]);
// 		}
// 	str[i] = '\0';
// 	return (str);
// }

//  FQLENSO


// static	char	is_set(char c,	char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		if (c == s[i])
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	int		i;
// 	int		j;
// 	int		s1_len;
// 	int		s2_len;
// 	char	*s2;

// 	if (!s1)
// 		return (0);
// 	s1_len = ft_strlen(s1);
// 	i = 0;
// 	j = s1_len;
// 	while (is_set(s1[i], (char *)set))
// 		i++;
// 	while (is_set(s1[--j], (char *)set))
// 		if (j == 0)
// 			break ;
// 	s2_len = (s1_len - i) - (s1_len - j) + 2;
// 	if (s2_len < 1)
// 		s2_len = 1;
// 	s2 = ft_calloc(s2_len, sizeof(char));
// 	if (!s2)
// 		return (0);
// 	ft_strlcpy(s2, (char *)&s1[i], s2_len);
// 	return (s2);
// }
