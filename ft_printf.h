/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicigar < alicigar@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:26:17 by alicigar          #+#    #+#             */
/*   Updated: 2025/02/05 01:26:22 by alicigar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(char const *format, ...);
int	ft_print_c(char c);
int	ft_print_s(char *str);
int	ft_print_dec(int n);
int	ft_print_u(unsigned int n);
int	ft_print_ptr(void *ptr);
int	ft_print_hexa(unsigned int num);
int	ft_print_hexacaps(unsigned int num);

#endif
