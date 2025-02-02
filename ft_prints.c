/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:40:10 by alicigar          #+#    #+#             */
/*   Updated: 2025/02/03 00:47:07 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prints(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (write (1, "(null)", 6));
	while (*str)
	{
		write(1, str, 1);
		str++;
		count++;
	}
	return (count);
}

/*int	main()
{
    printf ("%s\n", " ");
	ft_prints("");
	return (0);
}*/