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
	int	temp;

	temp = (t_temp->x & temp->y | (~(t_temp->x) & t_temp->z));
	return ;
}

void	aux_g(t_data *data)
{
	// G(X, Y, Z) = (X & Y) | (X & ~Z)
	temp = (t_temp->x & temp->y | (~t_temp->x) & ~(t_temp->z));
	return ;
}

void	aux_h(t_data *data)
{
	int	temp;

	temp = (t_temp->x ^ t_temp->y ^ t_temp->z);
	// H(X, Y, Z) = X ^ Y ^ Z
	
	return ;
}

void	aux_i(t_data *data)
{
	int	temp;
	
	temp = t_temp->y ^ (t_temp->x & ~(t_temp->z));
	// I(X, Y, Z) = Y ^ (X & ~Z)
	return ;
}

void	process_message_blocks(t_data *data)
{
	
	return ;
}
