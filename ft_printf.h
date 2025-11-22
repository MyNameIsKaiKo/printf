/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:11:13 by jleray            #+#    #+#             */
/*   Updated: 2025/11/14 12:11:13 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

void	ft_putnbr_base(size_t nb, char *base, size_t *i);
size_t	ft_strlen(const char *s);
size_t	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd, size_t *i);
int		ft_putchar_fd(char c, int fd);
size_t	ft_putptr(void *ptr);
void	ft_putnbr_hex(unsigned int nb, char *base, size_t *i);
int		ft_printf(const char *s, ...) __attribute__((format(printf, 1, 2)));
#endif
