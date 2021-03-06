/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:38:56 by eliu              #+#    #+#             */
/*   Updated: 2018/11/28 14:54:12 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl_md5.h"

void	init_data(t_data *data)
{
//	data->encryption_alg = NULL;
	data->string = NULL;
	data->hex_length = NULL;
	data->message_digest = NULL;
	data->next = NULL;
	return ;
}

static void	init_flags(t_flag *flags)
{
	flags->q = 0;
	flags->r = 0;
	flags->s = 0;
	flags->t = 0;
	return ;
}

void	init_state(t_flag *flags, t_data *data)
{
	init_flags(flags);
	init_data(data);
	return ;
}
