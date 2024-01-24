/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpenas-z <mpenas-z@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:46:22 by mpenas-z          #+#    #+#             */
/*   Updated: 2024/01/24 19:44:59 by mpenas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_format(char const *string, int i, int *chars, va_list args)
{
	if (string[i] == 'c')
		ft_putchar(va_arg(args, int), chars);
	else if (string[i] == 's')
		ft_putstr(va_arg(args, char *), chars);
	else if (string[i] == 'p')
	{
		ft_putstr("0x", chars); 
		ft_putptr(va_arg(args, unsigned long long), chars);
	}
	else if (string[i] == 'd' || string[i] == 'i')
		ft_putnbr(va_arg(args, int), chars);
	else if (string[i] == 'u')
		ft_putunsig(va_arg(args, unsigned int), chars);
	else if (string[i] == 'x')
		ft_puthex(va_arg(args, unsigned int), chars, 'x');
	else if (string[i] == 'X')
		ft_puthex(va_arg(args, unsigned int), chars, 'X');
	else if (string[i] == '%')
		ft_putchar('%', chars);
}

int	ft_printf(char const *string, ...)
{
	va_list	args;
	int		i;
	int		chars;

	i = 0;
	chars = 0;
	va_start(args, string);
	while (string[i])
	{
		if (string[i] == '%')
			check_format(string, i++, &chars, args);
		else
		{
			ft_putchar(string[i], &chars);
			chars++;
		}
		i++;
	}
	va_end(args);
	return (chars);
}
