/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smilla-c <smilla-c@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:27:59 by smilla-c          #+#    #+#             */
/*   Updated: 2026/01/14 10:09:44 by smilla-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)//devuelve un puntero cuando encuentra c
{
	size_t			i;
	unsigned char	character;

	character = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == character)
			return ((char *)&s[i]);
		i++;
	}
	if (character == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
