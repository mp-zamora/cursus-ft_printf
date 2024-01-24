/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpenas-z <mpenas-z@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:06:48 by mpenas-z          #+#    #+#             */
/*   Updated: 2024/01/24 19:46:31 by mpenas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned long long ptr, int *chars)
{
	if (ptr == 0)
		ft_putchar('0', chars);
	else
	{
		if (ptr >= 16)
		{
			ft_putptr(ptr / 16, chars);
			ft_putptr(ptr % 16, chars);
		}
		else
		{
			if (ptr <= 9)
				ft_putchar((ptr + '0'), chars);
			else
				ft_putchar((ptr - 10 + 'a'), chars);
		}
	}
}
