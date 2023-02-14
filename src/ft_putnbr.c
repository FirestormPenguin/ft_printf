/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiubell <egiubell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:33:13 by egiubell          #+#    #+#             */
/*   Updated: 2023/02/14 15:40:48 by egiubell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
		len++;
	}
	if (n / 10 != 0)
		ft_putnbr(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}

int	ft_putunsign(unsigned int n)
{
	int	len;

	len = 0;
	if (n / 10 != 0)
		ft_putnbr(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}
