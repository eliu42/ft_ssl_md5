/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 15:39:38 by eliu              #+#    #+#             */
/*   Updated: 2016/11/12 15:03:32 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	temp = 0;
	if (!little[i])
		return ((char*)big);
	while (big[i])
	{
		temp = i;
		j = 0;
		while (big[temp] == little[j])
		{
			temp++;
			j++;
			if (!little[j])
				return ((char*)big + i);
		}
		i++;
	}
	return (NULL);
}
