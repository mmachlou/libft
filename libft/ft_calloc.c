/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachlou <mmachlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:40:55 by mmachlou          #+#    #+#             */
/*   Updated: 2024/06/19 20:24:18 by mmachlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	void	*ptr;

	if (count != 0 && n >= (size_t) - 1 / count)
		return (NULL);
	ptr = malloc(count * n);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, count * n);
	return (ptr);
}
