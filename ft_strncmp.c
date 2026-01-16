/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smilla-c <smilla-c@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:19:11 by smilla-c          #+#    #+#             */
/*   Updated: 2026/01/14 10:22:57 by smilla-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
	//compara dos cadenas hasta n caracteres
{
	const unsigned char	*ucs1;
	const unsigned char	*ucs2;
	size_t				i;

	ucs1 = (const unsigned char *)s1;
	ucs2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && ucs1[i] && ucs2[i] && ucs1[i] == ucs2[i])
		i++;
	if (i >= n)
		return (0);
	else
		return (ucs1[i] - ucs2[i]);
}
