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

void	ft_putnbr_hex(size_t nb, char *base)
{
	if (nb < ft_strlen(base))
	{
		ft_putchar_fd(base[nb], 1);
		return ;
	}
	else
	{
		ft_putnbr_hex(nb / ft_strlen(base), base);
		ft_putnbr_hex(nb % ft_strlen(base), base);
	}
}
