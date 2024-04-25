/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 23:46:59 by esafouan          #+#    #+#             */
/*   Updated: 2022/10/31 23:47:23 by esafouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(long n);
int	ft_hexadicimal_ouper(unsigned int n);
int	ft_hexadicimal_lower(unsigned int n);
int	adress(unsigned long n);
int	ft_printf(const char *s, ...);
#endif
