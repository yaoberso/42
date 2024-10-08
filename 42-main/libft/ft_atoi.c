/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <yaoberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:41:00 by yaoberso          #+#    #+#             */
/*   Updated: 2024/10/08 10:50:10 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_sign(int *i, const char *str)
{
	int		count;

	count = 0;
	while (str[*i] == '+' || str[*i] == '-')
	{
		(*i)++;
		count++;
	}
	return (count);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		r;
	int		s;
	int		count;

	i = 0;
	r = 0;
	s = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
	{
		i++;
	}
	count = count_sign(&i, str);
	if (count > 1)
		return (0);
	if (str[i - 1] == '-')
			s *= -1;
	while (str[i] <= '9' && str[i] >= '0')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * s);
}
/*
#include <stdio.h>

int main(void)
{
    char *str = "+751754178";
    printf("%i", ft_atoi(str));
    return (0);
}
*/