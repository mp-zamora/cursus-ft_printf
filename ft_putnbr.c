/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpenas-z <mpenas-z@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:12:57 by mpenas-z          #+#    #+#             */
/*   Updated: 2024/01/24 19:11:40 by mpenas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *chars)
{
	if (nb < 0)
	{
		ft_putchar('-', chars);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, chars);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + '0', chars);
}
