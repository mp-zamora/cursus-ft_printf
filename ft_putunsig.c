/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsig.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpenas-z <mpenas-z@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:12:14 by mpenas-z          #+#    #+#             */
/*   Updated: 2024/01/24 19:14:48 by mpenas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsig(unsigned int nb, int *chars)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, chars);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + '0', chars);
}
