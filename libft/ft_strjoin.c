/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachlou <mmachlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:19:07 by mmachlou          #+#    #+#             */
/*   Updated: 2024/06/14 13:11:28 by mmachlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	char	*dst;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	total = ft_strlen((char *) s1) + ft_strlen((char *) s2) + 1;
	dst = ft_calloc(total, sizeof(char));
	if (dst == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(dst, s1, total + 1);
	ft_strlcpy((dst + ft_strlen((char *) s1)), s2, ft_strlen((char *) s2) + 1);
	return (dst);
}
