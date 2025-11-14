/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_lhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:30:51 by jleray            #+#    #+#             */
/*   Updated: 2025/11/14 12:30:51 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	nbcar_calc(int nb, char *base)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / (int)ft_strlen(base);
		i++;
	}
	return (i);
}

int	ft_putnbr_hex(unsigned int nb, char *base, int nbcar)
{
	if (nb < (unsigned int)ft_strlen(base))
	{
		ft_putchar_fd(base[nb], 1);
		nbcar++;
		return (nbcar);
	}
	else
	{
		ft_putnbr_hex(nb / (unsigned int)ft_strlen(base), base, nbcar);
		ft_putnbr_hex(nb % (unsigned int)ft_strlen(base), base, nbcar);
	}
	return (nbcar_calc(nb, base));
}
