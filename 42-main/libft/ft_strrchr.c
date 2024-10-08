/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <yaoberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:56:18 by yaoberso          #+#    #+#             */
/*   Updated: 2024/10/04 10:44:49 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_occ;

	i = 0;
	last_occ = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			last_occ = (char *)(s + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)(s + i));
	}
	return (last_occ);
}
