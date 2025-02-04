/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:40:00 by alicigar          #+#    #+#             */
/*   Updated: 2025/02/04 04:44:56 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int);

int	ft_print_ptr(void *ptr)
{
	unsigned long	d;
	int			count;

	d = (unsigned long)ptr;
	count = 0;
	if (ptr == NULL)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	count += write (1, "0x", 2);
	count += ft_print_hexa(d);
	return (count);
}
