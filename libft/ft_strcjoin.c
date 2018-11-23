/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 12:07:07 by eliu              #+#    #+#             */
/*   Updated: 2017/01/11 12:26:15 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcjoin(char const *s1, char const *s2, char c)
{
	char	*str;
	size_t	cat;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	cat = ft_strclen(s2, c);
	str = (char*)malloc(sizeof(char) * (ft_strlen(s1) + cat + 1));
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strncat(str, s2, cat);
	return (str);
}
