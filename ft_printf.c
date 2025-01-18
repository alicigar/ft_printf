/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:26:24 by alicigar          #+#    #+#             */
/*   Updated: 2025/01/13 18:13:52 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handle_conversion(char c, va_list args)
{
	if (c == 'c')
	{
		ft_putchar(va_arg(args, int));
		return (1);
	}
	else if (c == 's')
	{
		ft_putstr(va_arg(args, char *));
		return (1);
	}
	else if (c == 'p')
	{
		ft_putnbr_ptr(va_arg(args, void *));
		return (1);
	}
	else if (c == 'd' || c == 'i')
	{
		ft_putnbr(va_arg(args, int));
		return (1);
	}
	else if (c == 'u')
	{
		ft_putnbr_unsigned(va_arg(args, unsigned int));
		return (1);
	}
	else if (c == 'x')
	{
		ft_putnbr_hexa(va_arg(args, unsigned int), 0);
		return (1);
	}
	else if (c == 'X')
	{
		ft_putnbr_hexa(va_arg(args, unsigned int), 1);
		return (1);
	}
	else if (c == '%')
	{
		ft_put_percent();
		return (1);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	count;
	int	i;
	
	i = 0;
	if (!format)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		if(format[i] == '%')
		{
			i++;
			count += ft_format(&args, format[i]);
		}
		else if (format[i] != '%')
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
