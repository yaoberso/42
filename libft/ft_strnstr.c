/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaoberso <yaoberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:32:21 by yaoberso          #+#    #+#             */
/*   Updated: 2024/10/03 14:05:42 by yaoberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	if
	while(haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			j = 0;
			while(needle[j] != '\0')
			{
				if (needle[j] != haystack[i])
				{
					break;
				}
				else if(ft_strlen(needle) == j)
				{
					while ()
				}
			} 
		}
	}
}