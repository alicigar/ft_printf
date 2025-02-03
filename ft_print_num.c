/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 01:05:26 by alicigar          #+#    #+#             */
/*   Updated: 2025/02/03 02:17:53 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_c(char c);

int	ft_print_num(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_print_c('-');
		n = -n;
	}
	if (n > 9)
	{
		count += ft_print_num(n / 10);
		count += ft_print_num(n % 10);
	}
	else
		count += ft_print_c (n + '0');
	return (count);
}
