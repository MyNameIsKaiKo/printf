/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 19:58:46 by jleray            #+#    #+#             */
/*   Updated: 2025/11/16 19:58:46 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex(unsigned int nb, char *base, size_t *i)
{
	if (nb < 16)
	{
		(*i) += ft_putchar_fd(base[nb], 1);
		return ;
	}
	else
	{
		ft_putnbr_base(nb / ft_strlen(base), base, i);
		ft_putnbr_base(nb % ft_strlen(base), base, i);
	}
}
