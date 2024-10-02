/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <yaoberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:10:29 by yaoberso          #+#    #+#             */
/*   Updated: 2024/10/02 14:10:29 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	unsigned char *s = (unsigned char *)src;
	unsigned char *d = (unsigned char *)dest;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return (dest);
	}
	else
	{
		size_t i;
		i = n;
		while(i > 0)
		{
			i--;
			d[i] = s[i];
		}
		return (dest);
	}
}