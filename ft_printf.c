/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:25:52 by jleray            #+#    #+#             */
/*   Updated: 2025/11/08 15:25:52 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	print_tag(char *format, va_list args)
{
	size_t	i;

	i = 0;
	if (*format == 'c')
		i = (size_t)ft_putchar_fd((char)va_arg(args, int), 1);
	else if (*format == 's')
		i = ft_putstr_fd((char *)va_arg(args, char *), 1);
	else if (*format == 'p')
		i = ft_putptr((void *)va_arg(args, void *));
	else if (*format == 'd')
		ft_putnbr_fd(va_arg(args, int), 1, &i);
	else if (*format == 'i')
		ft_putnbr_fd(va_arg(args, int), 1, &i);
	else if (*format == 'u')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789", &i);
	else if (*format == 'x')
		ft_putnbr_base(va_arg(args, int), "0123456789abcdef", &i);
	else if (*format == 'X')
		ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF", &i);
	else if (*format == '%')
		i = ft_putchar_fd('%', 1);
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	ssize_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	va_start(args, s);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			i += print_tag(str, args);
			str++;
		}
		else
		{
			i++;
			ft_putchar_fd(*str, 1);
			str++;
		}
	}
	va_end(args);
	return (i);
}
