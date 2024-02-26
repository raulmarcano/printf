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

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	size_t	len;

	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			if (format[i] == 'c')
				len = ft_putchar(va_arg(args, int));
			else if (format[i] == 's')
				len = ft_putstr(va_arg(args, char *));
			else if (format[i] == 'd' || format[i] == 'i')
				len = ft_putnbr(va_arg(args, int));
			else if (format[i] == 'u')
				len = ft_putunsigned(va_arg(args, unsigned int));
			else if (format[i] == 'x')
				len = ft_puthex(va_arg(args, int), "0123456789abcdef");
			else if (format[i] == 'X')
				len = ft_puthex(va_arg(args, int), "0123456789ABCDEF");
			else if (format[i] == '%')
				len = ft_putchar('%');
			else if (format[i] == 'p')
			{
				write(1, "0x", 2);
				len = (ft_putpoint(va_arg(args, char *))) + 2;
			}
		}
		else
		{
			ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (0);
}
/*
int main() {
    char c = 'A';
    char *s = "Hello, World!";
    int d = 42;
    unsigned int u = 123;
    int x = 255;

    ft_printf("Character: %c\n", c);
	printf("Character: %c\n", c);

    ft_printf("String: %s\n", s);
	printf("String: %s\n", s);

    ft_printf("Integer: %d\n", d);
	printf("Integer: %d\n", d);

    ft_printf("Unsigned Integer: %u\n", u);
	printf("Unsigned Integer: %u\n", u);

    ft_printf("Hexadecimal (lowercase): %x\n", x);
	printf("Hexadecimal (lowercase): %x\n", x);

    ft_printf("Hexadecimal (uppercase): %X\n", x);
	printf("Hexadecimal (uppercase): %X\n", x);

    ft_printf("Percentage: %%\n");
	printf("Percentage: %%\n");

    ft_printf("Pointer: %p\n", &d);
	printf("Pointer: %p\n", &d);

    return (0);
}
*/