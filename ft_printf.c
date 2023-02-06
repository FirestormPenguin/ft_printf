/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:42:20 by egiubell          #+#    #+#             */
/*   Updated: 2023/02/06 17:42:59 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_conversion(char c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_arg(args, char));
	if (c == 's')
		ft_putstr(va_arg(args, char *));
	if (c == 'p')
		ft_putpoint(va_arg(args, void *));
	if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(args, int));
	if (c == 'u')
		
	if (c == 'x')
	
	if (c == 'X')

	if (c == '%')
		write(1, '%', 1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;

	i = 0;
	va_start(args, str);
	while(str[i])
	{
		if (str[i] == '%')
		{
			ft_conversion(str[i + 1], args);
			i+++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return ;
}

int main()
{

}
