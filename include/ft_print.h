/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:33:11 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/19 09:46:55 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printchar(int c);
int	ft_printstr(const char *str);
int	ft_printptr(void *ptr);
int	ft_printnbr(int nb);
int	ft_printunsigned(unsigned int n);
int	ft_print_hex(unsigned int num, const char format);
int	ft_printpercent(void);

#endif
