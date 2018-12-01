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

static void	find_data_len(t_data *data)
{
	int	len;

	len = ft_strlen(data->string);
	data->hex_length = ft_itoa_base(len, 16);
	return ;
}

static void	append_hex_length(t_data *data)
{
	find_data_len(data);
	data->string = ft_strjoin_memdel(data->string, data->hex_length);
	return ;
}

static void	append_padding(t_data *data)
{
	int		padlen;
	char		*padstr;

	padlen = ft_strlen(data->string) % 64;
	if (padlen < 56)
	{
		padlen += 64;
	}
	padstr = malloc(sizeof(char*) * (56 - padlen + 1));
	ft_bzero(padstr, strlen(padstr));
	padstr = padstr + (1 << (padlen * 8 - 1));
	return ;
}

void	append_data(t_data *data)
{
	int	len;
	char	*hex;

	len = ft_strlen(data->string) % ft_expn(2, 64);
	hex = ft_itoa_base(len, 16);
	data->hex_length = hex;
	append_padding(data);
	append_hex_length(data);
	return ;
}
