/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smilla-c <smilla-c@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:49:49 by smilla-c          #+#    #+#             */
/*   Updated: 2026/01/14 10:15:15 by smilla-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
//concatena dos  cadenas controlando el volumen del buffer 
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest_len < destsize && dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len == destsize)
		return (destsize + src_len);
	i = 0;
	while (src[i] && dest_len + i + 1 < destsize)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < destsize)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
