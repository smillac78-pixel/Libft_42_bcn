/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smilla-c <smilla-c@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 10:24:40 by smilla-c          #+#    #+#             */
/*   Updated: 2026/01/14 10:29:09 by smilla-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)//convierte minuscula en mayuscula
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
