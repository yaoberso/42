/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <yaoberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:51:05 by yaoberso          #+#    #+#             */
/*   Updated: 2024/10/07 09:57:36 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t		total_size;
	void		*ptr;

	total_size = nitems * size;
	if (nitems == 0 || size == 0 || total_size / nitems != size)
	{
		return (NULL);
	}
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
