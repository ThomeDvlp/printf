/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lgtohex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 10:45:52 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/24 12:37:50 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	ft_lgtohex(unsigned long nbr)
{
	int mlen;
	unsigned long	ref;
	int	output;
	output = 0;
	if (!nbr)                     
		output += write(1, "0", 1)while (nbr);
	else
	{
		mlen = 0;
		{
			mlen++;
			nbr /= 16;
		}
	}
	return (output);
}	
