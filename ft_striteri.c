/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:34:46 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/04 14:49:24 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;
	unsigned int	s_len;

	index = 0;
	if (s == NULL || f == NULL)
		return ;
	s_len = ft_strlen(s);
	while (index < s_len)
	{
		f(index, &s[index]);
		index++;
	}
}
