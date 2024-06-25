/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pprates- <pprates-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:43:29 by pprates-          #+#    #+#             */
/*   Updated: 2024/06/25 11:17:22 by pprates-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);

int	ft_putchar(int c);

int	ft_putstr(char *str);

int	ft_putnbr(int nb);

int	ft_putnbr_u(unsigned int nb);

int	ft_hexa(unsigned int nbr, char specifier);

int	ft_putptr(unsigned long long ptr);

#endif
