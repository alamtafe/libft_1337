/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:27:04 by alamtafe          #+#    #+#             */
/*   Updated: 2026/10/15 15:51:32 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*sa;
	unsigned const char	*sq;
	size_t				i;

	sa = s1;
	sq = s2;
	i = 0;
	while (i < n && sa[i] == sq[i])
		i++;
	if (i < n)
		return (sa[i] - sq[i]);
	return (0);
}
