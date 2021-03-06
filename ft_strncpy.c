/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 20:05:44 by hkang             #+#    #+#             */
/*   Updated: 2017/09/25 13:11:53 by hkang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char		*d;
	size_t		n;

	d = dst;
	n = len;
	while (n > 0 && *src != '\0')
	{
		*d++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*d++ = '\0';
		n--;
	}
	return (dst);
}
