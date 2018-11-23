/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssl_md5.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:57:03 by eliu              #+#    #+#             */
/*   Updated: 2018/11/22 17:15:52 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SSL_MD5_H
# define FT_SSL_MD5_H

#include "../libft/libft.h"

// Something to keep track of flags for final output
typedef struct		s_flag
{
	char	q;
	char	r;
	char	s;
	char	t;
}					t_flag;
// Something to store the string as well as the hashed output.

struct t_data;

typedef struct 		s_data
{
//	char	*encryption_alg;
	char	*string;
	char	*encrypted_s;
	t_data	*next;
}					t_data;

typedef struct		s_crypt
{
	char	*encryption_alg;
	t_crypt->next;
}					t_crypt;


#endif
