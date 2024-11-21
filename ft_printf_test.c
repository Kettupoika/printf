/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:39:46 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/21 10:51:50 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_print.h"
#include <limits.h>

int	ft_printf(const char *, ...);

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		void		*ptr;
		char		*name;
		char		*animal;
		char		c;
		int			age;
		int			i;
		int			x;
		unsigned int	u;
		int			error1;
		int			error2;
	
		name = "Laura";
		animal = "cat";
		c = 'a';
		age = 23;
		ptr = &age;
		i = 2023423;
		u = 76665;
		x =	25554645;
	
	
	
		printf("-------------------------------------------------------\n");
		printf("MAIN TESTING: testing output against system out\n");
		printf("-------------------------------------------------------\n");
		printf("-------------------------------------------------------\n");
		printf("						sys_out:\n");
		printf("-------------------------------------------------------\n");
		error1 =printf(" hello my name is %s and i am %d years old.\n i live in apartment %c\n and i have a %s\n %p\n %i\n %u\n %x\n %X\n %%\n", name, age, c, animal, ptr, i, u, x, x);
		printf("-------------------------------------------------------\n");
		printf("						ft_out:\n");
		printf("-------------------------------------------------------\n");
		error2 = ft_printf(" hello my name is %s and i am %d years old.\n i live in apartment %c\n and i have a %s\n %p\n %i\n %u\n %x\n %X\n %%\n", name, age, c, animal, ptr, i, u, x, x);	
		printf("-------------------------------------------------------\n");
		printf("sys error = %d\n", error1);
		printf("ft_error = %d\n", error2);
		printf("-------------------------------------------------------\n");
		//-----------------------------------------------------------------
		name = NULL;
		animal = NULL;
		c = 0;
		age = INT_MAX;
		ptr = NULL;
		i = INT_MAX;
		x = 255;
		u = INT_MAX;
		//-----------------------------------------------------------------
		printf("NULL TESTING: adding NULL arguments and MAX limits\n");
		printf("-------------------------------------------------------\n");
		printf("						sys_out:\n");
		printf("-------------------------------------------------------\n");
		error1 = printf(" hello my name is %s and i am %d years old.\n i live in apartment %c\n and i have a %s\n %p\n %i\n %u\n %x\n %X\n %%\n", name, age, c, animal, ptr, i, u, x, x);
		printf("-------------------------------------------------------\n");
		printf("						ft_out:\n");
		printf("-------------------------------------------------------\n");
		error2 = ft_printf(" hello my name is %s and i am %d years old.\n i live in apartment %c\n and i have a %s\n %p\n %i\n %u\n %x\n %X\n %%\n", name, age, c, animal, ptr, i, u, x, x);	
		printf("-------------------------------------------------------\n");
		printf("sys error = %d\n", error1);
		printf("ft_error = %d\n", error2);
		printf("-------------------------------------------------------\n");
		//------------------------------------------------------------------
		age = INT_MIN;
		i = INT_MIN;
		u = INT_MIN;
		//-----------------------------------------------------------------
		printf("-------------------------------------------------------\n");
		printf("NULL TESTING: adding NULL arguments and MIN limits\n");
		printf("-------------------------------------------------------\n");
		printf("						sys_out:\n");
		printf("-------------------------------------------------------\n");
		error1 = printf(" hello my name is %s and i am %d years old.\n i live in apartment %c\n and i have a %s\n %p\n %i\n %u\n %x\n %X\n %%\n", name, age, c, animal, ptr, i, u, x, x);
		printf("-------------------------------------------------------\n");
		printf("						ft_out:\n");
		printf("-------------------------------------------------------\n");
		error2 = ft_printf(" hello my name is %s and i am %d years old.\n i live in apartment %c\n and i have a %s\n %p\n %i\n %u\n %x\n %X\n %%\n", name, age, c, animal, ptr, i, u, x, x);	
		printf("-------------------------------------------------------\n");
		printf("sys error = %d\n", error1);
		printf("ft_error = %d\n", error2);
		printf("-------------------------------------------------------\n");
		//------------------------------------------------------------------
		printf(" TESTING: Empty string:\n");
		printf("-------------------------------------------------------\n");
		printf("						sys_out:\n");
		printf("-------------------------------------------------------\n");
		error1 = printf("");
		printf("-------------------------------------------------------\n");
		printf("						ft_out:\n");
		printf("-------------------------------------------------------\n");
		error2 = ft_printf("");	
		printf("-------------------------------------------------------\n");
		printf("sys error = %d\n", error1);
		printf("ft_error = %d\n", error2);
		printf("-------------------------------------------------------\n");
		//------------------------------------------------------------------
		printf("-------------------------------------------------------\n");
		printf(" TESTING: 0 \n");
		printf("-------------------------------------------------------\n");
		printf("						sys_out:\n");
		printf("-------------------------------------------------------\n");
		error1 = printf("0\n");
		printf("-------------------------------------------------------\n");
		printf("						ft_out:\n");
		printf("-------------------------------------------------------\n");
		error2 = ft_printf("0\n");	
		printf("-------------------------------------------------------\n");
		printf("sys error = %d\n", error1);
		printf("ft_error = %d\n", error2);
		printf("-------------------------------------------------------\n");
		//------------------------------------------------------------------
		printf("-------------------------------------------------------\n");
		printf("User input: string\n");
		printf("-------------------------------------------------------\n");
		//------------------------------------------------------------------
		return (0);
	}
	if (argc > 2)
	{
		printf("Too many input arguments.\n");
		return (0);
	}
	if (argc < 2)
	{
		printf("Too few Input arguments.\n");
		return (0);
	}
	int		error1;
	int		error2;
	char	*input;
	(void)argc;
	input = argv[1];

	printf("-------------------------------------------------------\n");
	printf(" USER INPUT: 0 \n");
	printf("-------------------------------------------------------\n");
	printf("						sys_out:\n");
	printf("-------------------------------------------------------\n");
	error1 = printf("%s\n", input);
	printf("-------------------------------------------------------\n");
	printf("						ft_out:\n");
	printf("-------------------------------------------------------\n");
	error2 = ft_printf("%s\n", input);	
	printf("-------------------------------------------------------\n");
	printf("sys error = %d\n", error1);
	printf("ft_error = %d\n", error2);
	printf("-------------------------------------------------------\n");

}	
