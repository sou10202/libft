/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:10:11 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/09 20:19:45 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	char	*ans;
	char	*tmp;

	c = (unsigned int)c;
	cc = (char)c;
	ans = (char *)s;
	tmp = NULL;
	while (*ans != '\0')
	{
		if (*ans == cc)
			tmp = ans;
		ans++;
	}
	if (cc == '\0')
		return (ans);
	return (tmp);
}
