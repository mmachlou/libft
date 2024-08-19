/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachlou <mmachlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:54:08 by mmachlou          #+#    #+#             */
/*   Updated: 2024/06/19 18:59:18 by mmachlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	if (!dest && !src)
	{
		return (0);
	}
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
