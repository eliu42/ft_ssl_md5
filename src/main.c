/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:56:14 by eliu              #+#    #+#             */
/*   Updated: 2018/11/22 16:38:58 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl_md5.h"

int		main(int argc, char **argv)
{
	int		i;
	t_flag	*flags;
	t_data	*data;
	if (argc < 2)
	{
		ft_putstr("Usage:\n");
		return (0);
	}
	
	// Initializaion of structures and what they hold.
	init_state(flags, data);

	i = 0;
	// Parse through the flags and options here
	determine_algorithm(argv, data, &i);
	parse_options(argv, flags, &i);
	store_strings_to_encrypt(argv, data, &i);
	
	
	return (0);
}

	// Storing things to be hashed into a struct to hash later on.
//	store_arguments(argv);

	// Encrypt the data and alogrithm on the data.
//	encrypt(t_data);
	
	// Output all end results dependant on flags here.
//	output(t_data);