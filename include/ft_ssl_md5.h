/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssl_md5.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:57:03 by eliu              #+#    #+#             */
/*   Updated: 2018/11/30 17:20:19 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SSL_MD5_H
# define FT_SSL_MD5_H

#include "../libft/libft.h"
#include <stdio.h>

typedef struct s_data		t_data;
typedef struct s_block		t_block;

// Something to keep track of flags for final output

typedef void			ft_ssl_dispatch(t_data*);

//	T_Flags

typedef struct			s_flag
{
	char			q;
	char			r;
	char			s;
	char			t;
}				t_flag;

//	T_Blocks

typedef struct		s_block
{
	char			*node;
	struct s_block	*next;
}					t_block;

typedef struct 		s_data t_data;
/*
**	Data consists of:
**		* One set of flags, they are the same for all arguments.
**		* One set of encryption algoirthms to go through.
**		
**		* Multiple strings, and files (which in essence are strings).
**		* Each string must have its length in hex, in 64 bits.
**		* The end result in which the string is message digested into.
**		
**	Needed for all:
**		* Message Digest 5 Components:
**			- Constants A, B, C, D.
**				A: 0x78563412,
**				B:
**				C:
**				D:
**			- Auxilirary Functions F(X, Y, Z), G(X, Y, Z), H(X, Y, Z), I(X, Y, Z)
**				F(X, Y, Z) = (X & Y ) | (~(X) | Z);
**				G(X, Y, Z) = (X & Y ) | (X | ~(Z));
**				H(X, Y, Z) = X ^ Y ^ Z;
**				I(X, Y, Z) = ??
*/

//	T_DATA

typedef struct 			s_data
{
	char			*hex_length;
//	char			*encryption_alg;
	
	char			*string;
	char			*encrypted_s;
	struct s_block	*blocks;
	struct s_data	*next;
}					t_data;

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

/*
**	append.c
*/

void				append_data(t_data*);

/*
**	process.c
*/

void				process_message_blocks(t_data*);

#endif
