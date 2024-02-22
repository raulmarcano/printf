/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:29:36 by rmarcano          #+#    #+#             */
/*   Updated: 2024/02/21 12:29:38 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_printf(char const *format, ...)
{
	va_list args;
	int		i;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i+1] != NULL)
		{
			i++;
			if(format[i] == 'c')
				ft_putchar(va_arg(args, char));
			else if(format[i] == 's')
				ft_putstr(va_arg(args, char*));
			else if(format[i] == 'd' || format[i] == 'i')
				ft_putnbr(va_arg(args, int));
			else if(format[i] == 'u')
				ft_putunsigned(va_arg(args, unsigned int))
			else if(format[i] == 'x')
			else if(format[i] == 'X')
			else if(format[i] == '%')
				ft_putchar(%);
			else if(format[i] == 'p')
				ft_putpoint(va_arg(args, char*))
		}
		else
		{
			ft_putstr("You have to specify the format of the variable")
		}


	}
	va_end(args);
	return (0);
}

int main()
{
    ft_printf;
}