/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachlou <mmachlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:57:42 by mmachlou          #+#    #+#             */
/*   Updated: 2024/06/10 17:39:46 by mmachlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t l)
{
	unsigned char	*ds;

	ds = s;
	while (l > 0)
	{
		*ds = (unsigned char ) c;
		ds++;
		l--;
	}
	return (s);
}
