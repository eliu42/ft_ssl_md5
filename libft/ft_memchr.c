/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:30:46 by eliu              #+#    #+#             */
/*   Updated: 2016/11/10 18:08:30 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *cur;

	cur = (unsigned char*)s;
	while (n--)
	{
		if (*cur == (unsigned char)(c))
			return (cur);
		cur++;
	}
	return (NULL);
}
