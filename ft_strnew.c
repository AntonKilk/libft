/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akilk <akilk@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:10:18 by akilk             #+#    #+#             */
/*   Updated: 2021/11/19 10:15:41 by akilk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(ssize_t size)
{
	char	*s;

	s = (char *)malloc(size * sizeof(char) + 1);
	if (!s)
		return (NULL);
	ft_memset(s, '\0', size + 1);
	return (s);
}
