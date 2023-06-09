/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:20:16 by soyamaza          #+#    #+#             */
/*   Updated: 2023/05/21 14:08:39 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;
	char	*ans;

	c = (unsigned int)c;
	cc = (char)c;
	ans = (char *)s;
	while (*ans != '\0')
	{
		if (*ans == cc)
			return (ans);
		ans++;
	}
	if (cc == '\0')
		return (ans);
	return (NULL);
}
