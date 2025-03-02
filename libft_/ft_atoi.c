/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagame <yagame@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:41:28 by otzarwal          #+#    #+#             */
/*   Updated: 2025/03/02 21:06:42 by yagame           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_skip_spaces(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v');
}

long	ft_atoi(const char *str, int *check)
{
	long long	res;
	int				q;
	int				i;

	i = 0;
	res = 0;
	q = 1;
	while (ft_skip_spaces(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			q *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i++] - '0');
		if((res * q) > 2147483647 ||  (res * q) < -2147483648)
			*check = 0;
	}
	
	return (res *= q);
}

