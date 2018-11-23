/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:18:57 by eliu              #+#    #+#             */
/*   Updated: 2018/11/22 16:45:29 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl_md5.h"

void	create_new_node(t_data *data, char *str)
{
	t_data	*new;

	init_data(new);
	new->string = strdup(str);
	while (data->next)
		data = data->next;
	data->next = new;
	return ;
}

void	store_strings_to_encrypt(char **argv, t_data *data, int i)
{
	data->string = strdup(argv[i]);
	i++;
	while (argv[i])
	{
		create_new_node(data, argv[i]);
		i++;
	}
	return ;
}
