/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:18:21 by eliu              #+#    #+#             */
/*   Updated: 2018/11/22 21:43:26 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl_md5.h"

/*
	Firstly, figure out if the input is a file or a string.
		If it is a string, store it.
		If it is a file, open and read it.
*/

/*
Figure out how to read entire contents of files without gnl.
*/

char	check_valid_option(char *str)
{
	if (ft_strcmp("-p", str) ||
		ft_strcmp("-q", str) ||
		ft_strcmp("-r", str) ||
		ft_strcmp("-s", str))
		return (1);
	return (0);
}

void	store_opt(t_flag *flags, char *flag)
{
	if (strcmp(flag, "-q"))
		flags->q = 1;
	else if (strcmp(flag, "-r"))
		flags->r = 1;
	else if (strcmp(flag, "-s"))
		flags->s = 1;
	else if (strcmp(flag, "-t"))
		flags->t = 1;
}

void	parse_options(char **argv, t_flag *flags, int *i)
{
	while (check_valid_option(argv[*i]))
	{
		store_opt(flags, argv[*i]);
		*i += 1;
	}
	return ;
}
