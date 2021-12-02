/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akilk <akilk@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:46:29 by akilk             #+#    #+#             */
/*   Updated: 2021/11/29 09:34:22 by akilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	**ft_lstrev(t_list **alst)
{
	t_list	*prev;
	t_list	*next;
	t_list	*current;

	if (alst == NULL)
		return (NULL);
	prev = NULL;
	current = *alst;
	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*alst = prev;
	return (alst);
}
