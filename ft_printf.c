/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:26:24 by alicigar          #+#    #+#             */
/*   Updated: 2025/02/03 00:48:37 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list *args, char format)
{
	int		count;

	count = 0;
	if (format == 'c')
		count += ft_printc(va_arg(*args, int));
	if (format == 's')
		count += ft_prints(va_arg(*args, char *));
	else if (format == '%')
		count += ft_printc('%');
	return (count);
}

int	ft_printf(char const *format, ...)
{
	va_list	list;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			count += ft_format(&list, format[i + 1]);
			i++;
		}
		else
		{
			count += ft_printc(format[i]);
		}
		i++;
	}
	va_end (list);
	return (count);
}
