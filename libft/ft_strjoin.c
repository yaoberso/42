/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <yaoberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:03:23 by yaoberso          #+#    #+#             */
/*   Updated: 2024/10/07 13:28:53 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	calcul_len(int size, char **strs, char *sep)
{
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += (ft_strlen(strs[i]));
		i++;
	}
	len += (size - 1) * ft_strlen(sep);
	return (len);
}

char	*concat(int size, char **strs, char *sep, int total_len)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)malloc(total_len + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(result, sep);
		}
		i++;
	}
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_len;

	if (size <= 0)
	{
		result = (char *)malloc(1);
		if (result == NULL)
		{
			return (NULL);
		}
		result[0] = '\0';
		return (result);
	}
	total_len = calcul_len(size, strs, sep);
	result = concat(size, strs, sep, total_len);
	return (result);
}
