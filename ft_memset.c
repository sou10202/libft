/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:51:17 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/09 18:19:49 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bb;
	unsigned char	*tmp;
	unsigned char	cc;

	bb = (unsigned char *)b;
	tmp = bb;
	cc = (unsigned char)c;
	while (len > 0)
	{
		*bb = cc;
		bb++;
		len--;
	}
	return (tmp);
}
