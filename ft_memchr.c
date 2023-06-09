/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:10:42 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/09 19:03:33 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ss;
	unsigned char		cc;

	ss = (const unsigned char *)s;
	cc = (unsigned char)c;
	while (n > 0)
	{
		if (*ss == cc)
			return ((void *)ss);
		n--;
		ss++;
	}
	return (NULL);
}
