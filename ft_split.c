/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 20:22:00 by alamtafe          #+#    #+#             */
/*   Updated: 2026/10/17 14:49:12 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(char const *s, char c)
{
	size_t	i;
	size_t	wd;

	i = 0;
	wd = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			wd++;
		while (s[i] != c && s[i])
			i++;
	}
	return (wd);
}

static char	*add_backs(char const *src, size_t start, size_t end)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = malloc(end - start + 1);
	if (!dest)
		return (NULL);
	while (i + start < end)
	{
		dest[i] = src[i + start];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**be_free(char **res, size_t i)
{
	while (i > 0)
	{
		i--;
		free(res[i]);
	}
	free(res);
	return (NULL);
}

static char	**create_array_strings(char **res, char const *s, char c, size_t wd)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	end = 0;
	while (i < wd)
	{
		start = end;
		while (s[start] && s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		res[i] = add_backs(s, start, end);
		if (!res[i])
			return (be_free(res, i));
		i++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	wd;

	wd = count_words(s, c);
	res = malloc((wd + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	return (create_array_strings(res, s, c, wd));
}
