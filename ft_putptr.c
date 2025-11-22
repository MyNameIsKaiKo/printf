/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:36:41 by jleray            #+#    #+#             */
/*   Updated: 2025/11/16 14:36:41 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putptr(void *ptr)
{
	size_t	i;

	if (ptr == 0)
	{
		i = ft_putstr_fd("(nil)", 1);
		return (i);
	}
	ft_putstr_fd("0x", 1);
	i = 2;
	ft_putnbr_base((size_t)ptr, "0123456789abcdef", &i);
	return (i);
}
