/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:17:04 by alamtafe          #+#    #+#             */
/*   Updated: 2026/10/14 19:54:48 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t 			i;

	s = src;
	d =  dest;
	if (s == d || n == 0)
		return (dest);
	if (s < d)
	{	
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
