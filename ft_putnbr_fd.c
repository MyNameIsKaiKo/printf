/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:29:27 by jleray            #+#    #+#             */
/*   Updated: 2025/10/23 14:29:27 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, size_t *i)
{
	if (n == -2147483648)
	{
		(*i) += ft_putstr_fd("-2147483648", 1);
		return ;
	}
	else if (n < 0)
	{
		(*i) += ft_putchar_fd('-', fd);
		n *= -1;
		ft_putnbr_fd(n, fd, i);
	}
	else if (n >= 0 && n <= 9)
	{
		(*i) += ft_putchar_fd(n + '0', fd);
		return ;
	}
	else
	{
		ft_putnbr_fd(n / 10, fd, i);
		ft_putnbr_fd(n % 10, fd, i);
	}
}
