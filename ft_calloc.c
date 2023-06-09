/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:20:52 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/04 14:30:14 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	int		i;

	p = NULL;
	i = 0;
	if (count == 0 || size == 0)
	{
		p = malloc(1);
		*p = 0;
		return ((void *)p);
	}
	if (count > SIZE_MAX / size)
		return (p);
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, count * size);
	return ((void *)p);
}
