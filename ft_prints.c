/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:40:10 by alicigar          #+#    #+#             */
/*   Updated: 2025/01/29 21:11:19 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_prints(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

/*int	main()
{
    printf ("%s\n", " ");
	ft_prints("");
	return (0);
}*/