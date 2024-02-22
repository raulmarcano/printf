/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:36:52 by rmarcano          #+#    #+#             */
/*   Updated: 2024/02/22 16:36:53 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int nb)
{	
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		count += ft_putchar(nb + '0');
	}
	else
	{
		count += ft_putnbr(nb / 10);
		count += ft_putchar (nb % 10 + '0');
	}
	return (count);
}

int	ft_putunsigned(unsigned int nb)
{
	int	count;

	if (nb < 10)
	{
		ft_putchar(nb + '0');
		count++;
	}
	else
	{
		count++;
		ft_putunsigned(nb / 10);
		ft_putchar (nb % 10 + '0');
	}
	return (count);
}

int	ft_putpoint(void *point)
{
	int	i;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_puthex(unsigned int nb)
{
	int count;

	count = 0;
	if (nb < 16)
		count += ft_putnbr(nb);
	else
	{
		count += ft_putnbr(nb / 16);
		count += ft_putnbr(nb % 16);
	}
}