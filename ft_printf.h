/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:26:17 by alicigar          #+#    #+#             */
/*   Updated: 2025/01/16 16:24:44 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);

void	ft_putchar(char c);
void	ft_putstr(const char *str);
void	ft_putnbr(int n);
void	ft_putnbr_unsigned(unsigned int n);
void	ft_putnbr_hexa(unsigned int n, int uppercase);
void	ft_putnbr_ptr(void *ptr);
void	ft_put_percent(void);

int	ft_handle_conversion(char c, va_list args);
int	ft_format(va_list *args, char specifier);

#endif
