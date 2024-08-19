/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachlou <mmachlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:26:07 by mmachlou          #+#    #+#             */
/*   Updated: 2024/06/18 16:01:31 by mmachlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	size_t	len;
	size_t	i;

	if (s == NULL || f == NULL)
	{
		return (NULL);
	}
	len = ft_strlen((char *) s);
	string = (char *)malloc((len + 1) * sizeof(char));
	if (string == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[len] = '\0';
	return (string);
}
