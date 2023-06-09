/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:57:56 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/09 19:04:03 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memcpy_b(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_c;
	const unsigned char	*src_c;
	size_t				i;

	i = len - 1;
	dst_c = (unsigned char *)dst;
	src_c = (const unsigned char *)src;
	while (i > 0)
	{
		dst_c[i] = src_c[i];
		i--;
	}
	dst_c[0] = src_c[0];
	return (dst_c);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (len == 0)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	else if (dst > src)
		return (ft_memcpy_b(dst, src, len));
	else
		return (dst);
}
