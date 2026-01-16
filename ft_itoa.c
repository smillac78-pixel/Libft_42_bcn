/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smilla-c <smilla-c@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 09:58:43 by smilla-c          #+#    #+#             */
/*   Updated: 2026/01/14 09:24:04 by smilla-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n, int base)//devuelve la longitud que ocupara un numero a str
{
	int	count;

	count = 0;
	if (n <= 0)
		++count;
	while (n && ++count)
		n = n / base;
	return (count);
}

char	*ft_itoa(int n)//convierte un int a una cadena
{
	int			len;
	char		*result;
	const char	*digits = "0123456789";

	len = ft_numlen(n, 10);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	result[len] = 0;
	if (n == 0)
		result[0] = '0';
	if (n < 0)
		result[0] = '-';
	while (n)
	{
		if (n > 0)
			result[--len] = digits[n % 10];
		else
			result[--len] = digits[n % 10 * -1];
		n = n / 10;
	}
	return (result);
}
