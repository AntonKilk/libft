/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akilk <akilk@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 08:35:01 by akilk             #+#    #+#             */
/*   Updated: 2021/11/19 10:13:40 by akilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(ssize_t size)
{
	char	*s;

	s = (char *)malloc(size * sizeof(char));
	if (!s)
		return (NULL);
	ft_memset(s, 0, size);
	return (s);
}
