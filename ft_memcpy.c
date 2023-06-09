/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:37:06 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/09 18:20:32 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *des, const void *src, size_t n)
{
	unsigned char		*des_c;
	const unsigned char	*src_c;
	size_t				i;

	if (des == NULL && src == NULL)
		return (NULL);
	i = 0;
	des_c = (unsigned char *)des;
	src_c = (const unsigned char *)src;
	while (i < n)
	{
		des_c[i] = src_c[i];
		i++;
	}
	return (des_c);
}
