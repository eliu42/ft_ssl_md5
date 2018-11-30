/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md5.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 22:04:06 by eliu              #+#    #+#             */
/*   Updated: 2018/11/28 21:13:47 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl_md5.h"

// 1) Append padding bits. Done? but still needs to be tested. I am not sure how to. Create a print memory function to print out values.
//
// 2) Append Length. Create itoa_base function to append length of str in hex
// 3) Initialize MD buffer.

/*
**	1) Take the total length of the string.
**	2) Find the missing number of bits (in bytes) that need to be appended.
**	3) Add "1000 0000" for first set, then "0000 0000" for all after.
**	4) Take original string length % 2^64, convert to hex, and append to str
*/

// data->string (char *str) to be altered.

void	md5(t_data *data)
{
/*
	const int		a0 = 0x67452301;
	const int		b0 = 0xefcdab89;
	const int		c0 = 0x98badcfe;
	const int		d0 = 0x10325476;
*/
	append_data(data);
	process_message_blocks(data);

	return ;
}
