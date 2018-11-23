/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:18:21 by eliu              #+#    #+#             */
/*   Updated: 2018/11/22 16:39:12 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (strcmp("-p", str) ||
		strcmp("-q", str) ||
		strcmp("-r", str) ||
		strcmp("-s", str))
		return (1);
	return (0);
}

void	store_opt(t_flags *flags, char *flag)
{
	if (flag == "-q")
		flags->q = 1;
	else if (flag == "-r")
		flags->r = 1;
	else if (flag == "-s")
		flags->s = 1;
	else if (flag == "-t")
		flags->t = 1;
}

void	parse_options(char **argv, t_flags *flags, int i)
{
	while (check_valid_option(argv[i]))
	{
		store_opt(flags, argv[i]);
		i++;
	}
	return ;
}
