/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smilla-c <smilla-c@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 14:33:43 by smilla-c          #+#    #+#             */
/*   Updated: 2026/01/14 10:06:58 by smilla-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words (const char *s, char c)
{
	size_t word;

	word = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
			word++;
		while (*s && *s != c)
			s++;
	}
	return (word);
}
char	**split(const char *s, char c)
{
	char **lst;
	size_t	i;
	size_t	word;

	if(!s)
		return (NULL);
	lst = (char **)malloc(sizeof(char *)*(count_words(s, c) + 1));
	if (!lst)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		word = 0;
		while (s[word] && s[word] != c)
			word++;
		if (word)
			lst[i++] = ft_substr(s, 0, word);
		s += word;
	}
	lst[i] = NULL;
	return (lst);
}
