/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachlou <mmachlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:08:40 by mmachlou          #+#    #+#             */
/*   Updated: 2024/06/19 15:33:22 by mmachlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sr;
	unsigned char	ch;
	size_t			i;

	i = 0;
	ch = c;
	sr = (unsigned char *) s;
	while (n > i)
	{
		if (sr[i] == ch)
		{
			return ((void *) &sr[i]);
		}
		i++;
	}
	return (0);
}
