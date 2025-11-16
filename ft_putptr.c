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
	size_t	temp;
	size_t	res;

	temp = (size_t)ptr;
	ft_putstr_fd("0x", 1);
	ft_putnbr_base(temp, "0123456789abcdef", NULL);
	res = count_car(temp, 16) + 2;
	return (res);
}
