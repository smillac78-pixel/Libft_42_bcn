/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smilla-c <smilla-c@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 15:14:15 by smilla-c          #+#    #+#             */
/*   Updated: 2026/01/14 09:18:31 by smilla-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int as)//comprueba si pertenece a la tabla ascii(0-127)
{
	if (as >= 0 && as <= 127)
		return (1);
	else
		return (0);
}
