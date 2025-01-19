/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar <alicigar@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 20:24:45 by alicigar          #+#    #+#             */
/*   Updated: 2025/01/18 20:25:09 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(const char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}
	
void	ft_putnbr(int n);
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= -10)
		ft_putnbr (n / 10);
	ft_putchar (n % 10 + '0');
}

void	ft_putnbr_unsigned(unsigned int n); //imprime un número sin signo
{
	if (n >= 10)
		ft_putnbr_unsigned (n / 10);
	ft_putchar (n % 10 + '0');
}

void	ft_putnbr_hexa(unsigned int n, int uppercase); //imprime un número en hexadecimal
{
	char	hexa_digits[] = "0123456789abcdef";
	if (uppercase)
		hexa_digits = "0123456789ABCDEF";
	if (n >= 16)
		ft_putnbr_hexa (n / 16, uppercase);
	ft_putchar (hexa_digits[n % 16]);
}

void	ft_putnbr_ptr(void *ptr); //imprime una dirección de memoria
{
	unsigned long p = (unsigned long)ptr;
	ft_putstr ("0x");
	ft_putnbr_hexa (p, 0);
}

void	ft_put_percent(void);
{
	write (1, "%", 1);
}
