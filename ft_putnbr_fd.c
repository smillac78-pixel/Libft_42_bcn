/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smilla-c <smilla-c@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:58:13 by smilla-c          #+#    #+#             */
/*   Updated: 2026/01/14 09:49:09 by smilla-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
//escribe un numero entero en un descriptor de archivo
{
	long int	number;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd ('-', fd);
		number = -number;
	}
	if (number > 9)
		ft_putnbr_fd (number / 10, fd);
	ft_putchar_fd (number % 10 + '0', fd);
}
