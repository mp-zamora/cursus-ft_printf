/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpenas-z <mpenas-z@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:52:32 by mpenas-z          #+#    #+#             */
/*   Updated: 2024/01/24 19:43:59 by mpenas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <libc.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(char const *string, ...);
void	ft_putchar(char c, int *chars);
void	ft_putstr(char	*str, int *chars);
void	ft_putnbr(int nb, int *chars);
void	ft_puthex(unsigned int hex, int *chars, char format);
void	ft_putunsig(unsigned int nb, int *chars);
void	ft_putptr(unsigned long long ptr, int *chars);

#endif
