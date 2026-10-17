/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamtafe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:48:22 by alamtafe          #+#    #+#             */
/*   Updated: 2026/10/17 18:49:50 by alamtafe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cal_length(int n)
{
	int	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		length = 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static char	*add_number_string(char *res, int n, int length)
{
	int	nb;

	if (n < 0)
	{
		res[0] = '-';
	}
	while (n != 0)
	{
		nb = n % 10;
		if (nb < 0)
			nb = -nb;
		length--;
		res[length] = nb + '0';
		n = n / 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		length;

	length = cal_length(n);
	res = malloc(length + 1);
	if (!res)
		return (NULL);
	res[length] = '\0';
	if (n == 0)
	{
		length--;
		res[length] = '0';
		return (res);
	}
	return (add_number_string(res, n, length));
}
