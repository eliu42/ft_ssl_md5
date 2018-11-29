/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digest.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:37:11 by eliu              #+#    #+#             */
/*   Updated: 2018/11/28 19:02:22 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl_md5.h"

void	aux_f(t_data *data)
{ 
	// F(X, Y, Z) = (X & Y) | (~X & Z)
	return ;
}

void	aux_g(t_data *data)
{
	// G(X, Y, Z) = (X & Y) | (X & ~Z)
	return ;
}

void	aux_h(t_data *data)
{
	// H(X, Y, Z) = X ^ Y ^ Z
	return ;
}

void	aux_i(t_data *data)
{
	// I(X, Y, Z) = Y ^ (X & ~Z)
	return ;
}

void	process_message_blocks(t_data *data)
{
	
	return ;
}
