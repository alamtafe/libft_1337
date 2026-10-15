/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:12:32 by alamtafe          #+#    #+#             */
/*   Updated: 2026/10/15 15:52:54 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*src;
	size_t				i;

	src = s;
	i = 0;
	while (i < n && src[i] != (unsigned char )c)
		i++;
	if (i < n)
		return ((void *)&src[i]);
	return (NULL);
}
