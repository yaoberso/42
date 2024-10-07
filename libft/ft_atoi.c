/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <yaoberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:41:00 by yaoberso          #+#    #+#             */
/*   Updated: 2024/10/07 13:35:52 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		r;
	int		s;

	i = 0;
	r = 0;
	s = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i] == '-')
			s *= -1;
		i++;
	while (str[i] <= '9' && str[i] >= '0')
		r = r * 10 + (str[i] - '0');
		i++;
	return (r * s);
}
/*
#include <stdio.h>

int main(void)
{
    char *str = "-751754178";
    printf("%i", ft_atoi(str));
    return (0);
}*/
