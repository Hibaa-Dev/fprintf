/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmezrari <hmezrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:41:12 by hmezrari          #+#    #+#             */
/*   Updated: 2025/11/16 18:53:24 by hmezrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	long	n;
	int		c;
	int		len;

	len = 1;
	n = nb;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
		len++;
	}
	if (n > 9)
		len += ft_putnbr(n / 10);
	c = (n % 10) + 48;
	write(1, &c, 1);
	return (len);
}
