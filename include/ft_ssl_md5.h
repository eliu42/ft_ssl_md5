/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssl_md5.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:57:03 by eliu              #+#    #+#             */
/*   Updated: 2018/11/22 22:33:17 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SSL_MD5_H
# define FT_SSL_MD5_H

#include "../libft/libft.h"

// Something to keep track of flags for final output
typedef struct		s_flag
{
	char			q;
	char			r;
	char			s;
	char			t;
}					t_flag;
// Something to store the string as well as the hashed output.

typedef struct 		s_data
{
//	char			*encryption_alg;
	char			*string;
	char			*encrypted_s;
	struct s_data	*next;
}					t_data;

typedef struct		s_crypt
{
	char			*encryption_alg;
	struct s_crypt	*next;
}					t_crypt;

/*
**	init.c
**/

void				init_data(t_data *data);
void				init_state(t_flag *flags, t_data *data);

/*
**	store.c
*/

void				store_strings_to_encrypt(char **argv, t_data *data, int *i);

/*
**	hash.c
*/
void				determine_algorithm(t_data *data, char *command);

/*
**	parse.c
*/

void				parse_options(char **argv, t_flag *flags, int *i);

/*
**	md5.c
*/

void				md5(t_data *data);

/*
**	sha256.c
*/

void				sha256(t_data *data);

#endif
