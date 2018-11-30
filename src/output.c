/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:27:05 by eliu              #+#    #+#             */
/*   Updated: 2018/11/23 16:08:03 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl_md5.h"

/*
**	-p: echo STDIN to STDOUT and append the checksum to STDOUT
**		- After finding out what checksum is, this should be fine.
**	-q: quiet mode
**		- Only the checksum is printed out. Overrides -r option.
**	-r: reverse the format of the output. (What does this mean?)
**		- Helps with visual diffs. Does nothing when compined with -ptx.
**	-s: print the sum of the given string.
**		- Print a checksum of the given string.
*/

void	flag_p(t_data *data)
{
	ft_putendl("tempstring");
	(void)data;
	return ;
}

void	flag_q(t_data *data)
{
	ft_putendl("tempstring");
	(void)data;
	return ;
}

/*
**	What is the order that things should be outputted in?
**		A:
**	Then what is the reversed order?
**		A:
*/

void	flag_r(t_data *data)
{
	ft_putendl("tempstring");
	(void)data;
	return ;
}

void	flag_s(t_data *data)
{
	ft_putendl("tempstring");
	(void)data;
	return ;
}

void	reverse_format(char *string)
{
	(void)string;
	return ;
}

void	find_checksum(char *string)
{
	(void)string;
	return ;
}

void	output(t_data *data)
{
	(void)data;	
	return ;
}
