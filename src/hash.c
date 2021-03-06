/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 19:59:58 by eliu              #+#    #+#             */
/*   Updated: 2018/11/28 14:52:53 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl_md5.h"

/*
t_cmd	g_cmds[3] = {
	{"md5", md5},
	{"sha256", sha256},
	{NULL, NULL}
};
*/

void	determine_algorithm(t_data *data, char *command)
{
	// Fix this later, no ugly code.
	if (!ft_strcmp(command, "md5"))
	{
		md5(data);
	}
	else if (!ft_strcmp(command, "sha256") || !ft_strcmp(command, "sha-256"))
	{
		sha256(data);
	}
	return ;
}
