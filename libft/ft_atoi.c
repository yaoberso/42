/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <yaoberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:41:00 by yaoberso          #+#    #+#             */
/*   Updated: 2024/10/02 15:01:52 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		r;
	int		s;

	i = 0;
	r = 0;
	s = 1;
	while (str[i] <= 13 && str[i] >= 9 || str[i] == ' ')
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
