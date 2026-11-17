/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmezrari <hmezrari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 22:47:06 by hmezrari          #+#    #+#             */
/*   Updated: 2025/11/16 18:53:35 by hmezrari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int nb)
{
	int				c;
	int				len;

	len = 1;
	if (nb > 9)
		len += ft_unsigned(nb / 10);
	c = (nb % 10) + 48;
	write(1, &c, 1);
	return (len);
}
