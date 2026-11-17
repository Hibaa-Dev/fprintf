/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmezrari <hmezrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 09:20:49 by hmezrari          #+#    #+#             */
/*   Updated: 2025/11/16 18:53:20 by hmezrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char c)
{
	int		len;
	char	*p;

	len = 1;
	if (c == 'x')
		p = "0123456789abcdef";
	if (c == 'X')
		p = "0123456789ABCDEF";
	if (n >= 16)
		len += ft_puthexa(n / 16, c);
	n = n % 16;
	write (1, p + n, 1);
	return (len);
}
