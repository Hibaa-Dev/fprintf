/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmezrari <hmezrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:53:05 by hmezrari          #+#    #+#             */
/*   Updated: 2025/11/16 18:52:57 by hmezrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_func(va_list args, char c)
{
	int	res;

	res = 0;
	if (c == 'c')
		res += ft_putchar(va_arg(args, int));
	else if (c == 's')
		res += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		res += ft_pointer(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		res += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		res += ft_unsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		res += ft_puthexa(va_arg(args, unsigned int), c);
	else if (c == '%')
		res += ft_putchar('%');
	else
		res += ft_putchar(c);
	return (res);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		res;
	va_list	args;

	if (format == NULL)
		return (-1);
	i = 0;
	res = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i] == '%' && !(format[i + 1]))
				return (-1);
			else if (format[i + 1])
				res += ft_func(args, format[++i]);
		}
		else
			res += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (res);
}
