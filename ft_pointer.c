/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmezrari <hmezrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:43:18 by hmezrari          #+#    #+#             */
/*   Updated: 2025/11/16 18:52:27 by hmezrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *p)
{
	char			*base;
	int				len;
	unsigned long	d;

	if (p == NULL)
		return (write(1, "(nil)", 5));
	len = 1;
	d = (unsigned long) p;
	base = "0123456789abcdef";
	if (d >= 16)
		len += ft_pointer((void *)(d / 16));
	if (len == 1)
		len += write(1, "0x", 2);
	write (1, &base[d % 16], 1);
	return (len);
}
