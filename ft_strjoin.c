/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:41:20 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/04 14:49:34 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	char	*tmp;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ans = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (ans == NULL)
		return (NULL);
	tmp = ans;
	while (*s1 != '\0')
	{
		*ans = *s1;
		ans++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*ans = *s2;
		ans++;
		s2++;
	}
	*ans = '\0';
	return (tmp);
}
