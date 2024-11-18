/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:07:58 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/18 15:46:04 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int		ft_printchar(int c);
int		ft_printstr(const char *str);
int		ft_printptr(void *ptr);
int		ft_printnbr(int nb);
int		ft_printunsigned(unsigned int n);
int		ft_print_hex(unsigned int num, const char format);
int		ft_printpercent();

#endif
