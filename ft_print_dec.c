/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 01:05:26 by alicigar          #+#    #+#             */
/*   Updated: 2025/02/05 01:01:15 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_dec(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write (1, "-", 1);
		count++;
		n = -n;
	}
	if (n >= 10)
		count += ft_print_dec(n / 10);
	write (1, &"0123456789"[n % 10], 1);
	count++;
	return (count);
}

/*int main()
{
	int num = 2147483647;

	printf ("%d\n", num);
	printf ("%i\n", num);
	ft_print_dec (num);
	return (0);
}*/
