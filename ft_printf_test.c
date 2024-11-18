/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:39:46 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/18 15:53:22 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_print.h"

int	ft_printf(const char *, ...);

int		main()
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
	//char		d;

	name = "Laura";
	animal = "cat";
	//animal = NULL;
	c = 'a';
	age = 23;
	ptr = &age;
	i = 2023423;
	//ptr = NULL;
	u = 76665;
	x =	25554645;
	//d = '%';



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

	animal = NULL;
	ptr = NULL;
	x = 255;

	printf("NULL TESTING:\n");
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
}	
