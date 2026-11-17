/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmezrari <hmezrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:00:06 by hmezrari          #+#    #+#             */
/*   Updated: 2025/11/16 17:58:38 by hmezrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_unsigned(unsigned int nb);
int	ft_putstr(char *s);
int	ft_putnbr(int nb);
int	ft_pointer(void *p);
int	ft_puthexa(unsigned int n, char c);
int	ft_printf(const char *format, ...);

#endif