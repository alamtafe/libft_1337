/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 21:39:20 by alamtafe          #+#    #+#             */
/*   Updated: 2026/10/16 09:20:50 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	i = ft_strlen(s);
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	while (i > 0)
	{
		str[i] = s[i];
		i--;
	}
	str[i] = s[i];
	return (str);
}
