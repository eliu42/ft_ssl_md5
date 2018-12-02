/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digest.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:37:11 by eliu              #+#    #+#             */
/*   Updated: 2018/12/01 02:07:29 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl_md5.h"

void	aux_f(t_data *data)
{ 
	// F(X, Y, Z) = (X & Y) | (~X & Z)
	int	temp;

	temp = (t_temp->x & temp->y | (~(t_temp->x) & t_temp->z));
	return ;
}

void	aux_g(t_data *data)
{
	// G(X, Y, Z) = (X & Y) | (X & ~Z)
	temp = (t_temp->x & temp->z | (~t_temp->y) & ~(t_temp->z));
	// G(b, c, d) = (b ^ c) ^d)
	temp = (t_temp->b ^ t_temp->c ^ t_temp->d);
	return ;
}

void	aux_h(t_data *data)
{
	int	temp;

	// H(X, Y, Z) = X ^ Y ^ Z
	temp = (t_temp->x ^ t_temp->y ^ t_temp->z);
	// G(b, c, d) = ((b & c) | (b & d) | (c & d));
	temp = (t_temp->x & temp->z | (~t_temp->y) & ~(t_temp->z));
	
	return ;
}

void	aux_i(t_data *data)
{
	int	temp;
	
	// I(X, Y, Z) = Y ^ (X & ~Z)
	temp = t_temp->y ^ (t_temp->x | ~(t_temp->z));
	// H(b, c, d) = b, c, d
	temp = (t_temp->b ^ t_temp->c ^ t_temp->d);
	return ;
}

void	process_message_blocks(t_data *data)
{
	int	temp;
	int i;

	i = 0;
	temp = 0;
	while (i <= 16)
	{
		aux_f(data);
		aux_g(data);
		aux_h(data);
		aux_i(data);
		// temp = (a leftrotate 5) + f + e + k + w[i];
		// e = d;
		// d = c;
		// c = b leftrotate 30;
		// b = a;
		// a = temp;
		//
	}
	// Add this chunk's hash to result so far:
	// h0 = h0 + a;
	// h1 = h1 + b;
	// h2 = h2 + c;
	// h3 = h3 + d;
	// h4 = h4 + e;
	//

	return ;
}

// Produce the final hash vale (big-endian) as a 160-bit number:
// hh = (h0 leftshift 128) or (h1 leftshift 96) or (h2 leftshift 64)
// or (h3 leftshift 32) or h4
//
// end.
