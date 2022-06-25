/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 03:28:48 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/25 00:32:40 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	index;

	if (!str)
		return (write (1, "(null)", 6));
	index = 0;
	while (str[index])
		index++;
	write (1, str, index);
	return (index);
}

int	ft_putnbr(int nbr)
{
	char	*strnb;

	strnb = ft_itoa(nbr);
	return (ft_putstr(strnb));
}

int	ft_putunbr(unsigned int nbr)
{
	int	nbrlen;

	nbrlen = 0;
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		nbrlen++;
	}
	else if (nbr)
		ft_putchar((nbr % 10) + '0');
	return (nbrlen);
}

int	ft_puthex(unsigned int nbr, char *hexref)
{
	unsigned int	mlen;
	char			*convertion;
	int				output;

	if (nbr == 0)
		return (ft_putchar('0'));
	mlen = 0;
	while (nbr)
	{
		mlen++;
		nbr /= 16;
	}
	convertion = (char *)malloc(sizeof(char) * (mlen + 1));
	if (!convertion)
		return (0);
	while (mlen)
	{
		convertion[mlen -1] = hexref[nbr % 16];
		nbr /= 16;
		mlen--;
	}
	output = ft_putstr(convertion);
	free (convertion);
	return (output);
}
