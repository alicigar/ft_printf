/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:39:54 by alicigar          #+#    #+#             */
/*   Updated: 2025/02/04 22:04:34 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 16)
		count += count + ft_print_hexa(num / 16);
	write (1, &"0123456789abcdef"[num % 16], 1);
	count++;
	return (count);
}
