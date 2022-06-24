/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:53:50 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/23 05:38:52 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_switcher(va_list lst, const char type)
{
	int value;
	char *lowhex;

	value = 0;
	lowhex = "0123456789abcdef";
	if (type == '%')
		value += ft_putchar('%');
	else if (type == 'c')
		value += ft_putchar(va_arg(lst, int));
	else if (type == 's')
		value += ft_pustr(va_arg(lst, char *));
	else if (type == 'd' || type == 'i')
		value += ft_putnbr(va_arg(lst, int));
	else if (type == 'u')
		value += ft_putunbr(va_arg(lst, unsigned int));
	else if (type == 'x')
		value += ft_puthex(va_arg(lst, unsigned int), lowhex);
	else if (type == 'X')
		value += ft_puthex(va_arg(lst, unsigned int), ft_toupper(lowhex));
//	else if (type == 'p')
//		value += 
	return (value);
}

int ft_printf(const char *strtype, ...)
{
	int		index;
	va_list	list;
	int		value;

	va_start(list, strtype);
	index = 0;
	value = 0;
	while (strtype[index])
	{
		if (strtype[index] == '%' 
			&& ft_strchr("cspdiuxX%", strtype[index + 1]))
		{
			value += ft_switch(list, strtype[ index + 1]);
			index++;
		}
		else
			value += ft_putchar(strtype[index]);
		index++;
	}
	va_end(list);
	return (value);
}
