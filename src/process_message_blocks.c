/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_message_blocks.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 01:44:04 by eliu              #+#    #+#             */
/*   Updated: 2018/12/01 01:44:07 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl_md5.h"

/*
**	Divide the string into 4 parts. 16 (32-bit) words.
*/

void	process_message_blocks(t_data *data)
{
	(void)data;
	return ;
}

void	*ft_memncpy(const char *src, char **dst, size_t len)
{
	size_t	i;
	char	*src_copy;

	src_copy = ft_strdup(src);
	i = 0;
	while (src_copy[i] && (*dst)[i] && i < len)
	{
		(*dst)[i] = src_copy[i];
		i++;
	}
	return (src_copy + i);
}

char	*find_next_512_bits(t_data *data)
{
	char	*new;

	new = (char*)malloc(sizeof(char) * 64 + 1);
	data->string = ft_memncpy(data->string, &new, 64);
	return (new);
}

void	str_move(char **data, char *block_str)
{
	*data = ft_strdup(block_str);
	ft_bzero(block_str, ft_strlen(block_str));
	free(block_str);
	return ;
}

/*
**	Make it so that every time I add a block of data to the list,
**	the new head is set to the last one.
*/

void	enqueue_blocks(t_block *blocks, char *block_str)
{
	if (blocks->data == NULL)
	{
		str_move(&blocks->data, block_str);
		return ;
	}
	while (blocks->data)
	{
		blocks = blocks->next;
	}
	str_move(&blocks->data, block_str);
	return ;	
}

void	create_message_blocks(t_data *data)
{
	char	*block_str;
	t_block	*blocks;

	blocks = malloc(sizeof(t_block*));
	while (data->string)
	{
		block_str = find_next_512_bits(data);
		enqueue_blocks(blocks, block_str);
	}
	return ;
}

void	process_message(t_data *data)
{
	create_message_blocks(data);
	return ;
}
