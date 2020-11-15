/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquinoa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 16:16:06 by aquinoa           #+#    #+#             */
/*   Updated: 2020/11/10 01:02:37 by aquinoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	l;

	l = len;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		if (!(sub_str = (char*)ft_calloc(1, sizeof(char))))
			return (NULL);
	}
	else
	{
		if (!(sub_str = (char*)ft_calloc(len + 1, sizeof(char))))
			return (NULL);
		while (len--)
			*sub_str++ = s[start++];
		sub_str -= l;
	}
	return (sub_str);
}
