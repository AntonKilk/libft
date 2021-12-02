/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akilk <akilk@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:58:19 by akilk             #+#    #+#             */
/*   Updated: 2021/11/24 20:10:44 by akilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void(*f)(t_list *elem))
{
	if (f == NULL)
		return ;
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
