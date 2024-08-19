/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachlou <mmachlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 14:59:54 by mmachlou          #+#    #+#             */
/*   Updated: 2024/06/21 14:59:54 by mmachlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*lst;
	size_t	i;
	size_t	str;

	str = 0;
	if (!s)
		return (0);
	while (start < ft_strlen(s) && (str < len && s[start + str]))
		str++;
	lst = malloc(sizeof(char) * (str + 1));
	if (!lst)
		return (0);
	i = 0;
	while (start < ft_strlen(s) && i < len && s[start + i])
	{
		lst[i] = s[start + i];
		i++;
	}
	lst[i] = '\0';
	return (lst);
}
