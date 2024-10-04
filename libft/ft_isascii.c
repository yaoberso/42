/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:25:46 by yaoberso          #+#    #+#             */
/*   Updated: 2024/10/01 12:27:19 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i <= 0 && i >= 127)
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char *str = "uygfwugf 82328";
	printf("%i", ft_isalnum(str));
	return (0);
}*/
