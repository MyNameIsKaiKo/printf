/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:16:45 by jleray            #+#    #+#             */
/*   Updated: 2025/11/14 12:16:45 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	nbcar_calc(int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	ft_putunbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb < 10)
	{
		ft_putchar_fd(nb + '0', 1);
		i++;
		return (i);
	}
	else
	{
		ft_putunbr(nb / 10);
		ft_putunbr(nb % 10);
	}
	return (nbcar_calc(nb));
}
