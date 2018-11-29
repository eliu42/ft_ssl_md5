/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:28:14 by eliu              #+#    #+#             */
/*   Updated: 2018/11/28 18:54:41 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl_md5.h"

/*
**	1) Take the total length of the string.
**	2) Find the missing number of bits (in bytes) that need to be appended.
**	3) Add "1000 0000" for first set, then "0000 0000" for all after.
**	4) Take original string length % 2^64, convert to hex, and append to str
*/

static void append_hex_length(t_data *data)
{
	char	*hex;

	hex = itoa_base(data->length, 16);
	data->string = ft_strjoin_memdel(data->string, hex);
	return ;
}

static void	append_padding(t_data *data)
{
	int		padlen;
	char	*padstr;

	padlen = data->length % 64;
	if (padlen < 56)
	{
		padlen += 64;
	}
	padstr = malloc(sizeof(char*) * (56 - padlen + 1));
	bzero(padstr);
	padstr = padstr + (1 << (padlen * 8 - 1));
	return ;
}

void	append_data(t_data *data)
{
	data->length = ft_strlen(data->string) % 2 ** 64;
	append_padding(data);
	append_length(data);
	return ;
}
