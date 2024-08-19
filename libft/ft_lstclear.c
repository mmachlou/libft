/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachlou <mmachlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:33:38 by mmachlou          #+#    #+#             */
/*   Updated: 2024/06/21 15:19:34 by mmachlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*te;

	if (lst)
	{
		while (*lst)
		{
			te = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = te;
		}
	}
}
