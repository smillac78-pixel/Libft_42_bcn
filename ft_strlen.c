/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smilla-c <smilla-c@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 12:46:57 by smilla-c          #+#    #+#             */
/*   Updated: 2026/01/14 10:17:28 by smilla-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
	//devuelve la longitud de una cadena sin contar el \0
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
