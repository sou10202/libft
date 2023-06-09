/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:18:18 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/04 15:47:23 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*ans;
	unsigned int	s_len;

	if (s == NULL || f == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	ans = malloc(sizeof(char) * (s_len + 1));
	if (ans == NULL)
		return (NULL);
	index = 0;
	while (index < s_len)
	{
		ans[index] = f(index, s[index]);
		index++;
	}
	ans[index] = '\0';
	return (ans);
}
