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

#include "printf.h"

int	ft_putptr(void *ptr)
{
	size_t	temp;

	temp = (size_t)ptr;
	ft_putstr_fd("0x", 1);
	ft_putnbr_hex(temp, "0123456789abcdef");
	return (count_car(temp, 10));
}
