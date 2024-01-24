/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpenas-z <mpenas-z@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:15:12 by mpenas-z          #+#    #+#             */
/*   Updated: 2024/01/24 19:45:52 by mpenas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int hex, int *chars, char format)
{
	if (hex == 0)
		ft_putchar('0', chars);
	else
	{
		if (hex >= 16)
		{
			ft_puthex(hex / 16, chars, format);
			ft_puthex(hex % 16, chars, format);
		}
		else
		{
			if (hex <= 9)
				ft_putchar(hex + '0', chars);
			else
			{
				if (format == 'x')
					ft_putchar((hex - 10 + 'a'), chars);
				else if (format == 'X')
					ft_putchar((hex - 10 + 'A'), chars);
			}
		}
	}
}
