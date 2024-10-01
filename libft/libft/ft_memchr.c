/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:24:58 by yaoberso          #+#    #+#             */
/*   Updated: 2024/10/01 13:37:26 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_memchr(char *str, const char l)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == l)
		{
			return (i + 1);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char *str = "bcdaefg";
	const char l = 'a';
	printf("%i", ft_memchr(str,l));
	return (0);
}*/
