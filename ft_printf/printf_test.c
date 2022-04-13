/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaynes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:15:25 by khaynes           #+#    #+#             */
/*   Updated: 2022/04/13 12:47:23 by khaynes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int hextest = 42;
	int testint = -9;
	char testchar = 'A';
	char *teststr = "This is a test";
	unsigned int unsigntest = 9; 	

	ft_printf("value of hextest using %%X = %X\n", hextest);
	ft_printf("value of hextest using %%x - %x\n", hextest);
	ft_printf("address of teststr = %p\n", teststr);
	ft_printf("test string = %s\n", teststr);
	ft_printf("test character = %c\n", testchar);
	ft_printf("test integer using %%i = %i\n", testint);
	ft_printf("test integer using %%d = %d\n",testint);
	ft_printf("test unsigned int = %u\n", unsigntest); 
	ft_printf("bum\n");
	

}	
