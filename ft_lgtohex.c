/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lgtohex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 10:45:52 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/24 15:38:43 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

static int ft_mlen(unsigned long nrb)
{
	int			mlen;

	mlen = 0;
	while (nbr > 15)
	{
		nbr /= 16
		mlen++;
	}
	return (mlen + 1);
}

int	ft_lgtohex(unsigned long nbr)
{
	char 			*str
	int				output;
	int				index;
	
	output = 0;
	if (!nbr)                     
		output += write(1, "0", 1);
	else
	{	
		index = ft_mlen(nbr);
		str = (char *)malloc((index + 1) * sizeof(char));
		str[index + 1] = 0;
		while (index > 0)
		{
			str[index] = (nbr % 10) + '0';
			nbr / 16;
			index--;
		}
		ft_putstr(str);
		output = 
	}

	return (output);
}	
