/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:37:11 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/09 19:03:24 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*cpy_ans(char *ans, unsigned int start, size_t sub_len,
		char const *s)
{
	size_t	i;

	i = 0;
	while (i < sub_len && s != '\0')
	{
		ans[i] = s[start + i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	sub_len;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
	{
		ans = malloc(sizeof(char) * 1);
		if (ans == NULL)
			return (NULL);
		*ans = '\0';
		return (ans);
	}
	sub_len = len;
	if (start + len > ft_strlen(s))
		sub_len = ft_strlen(s) - start;
	ans = malloc(sizeof(char) * (sub_len + 1));
	if (ans == NULL)
		return (NULL);
	ans = cpy_ans(ans, start, sub_len, s);
	return (ans);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char			*ans;
// 	unsigned int	i;
// 	unsigned int sub_len;

// 	if (s == NULL)
// 		return (NULL);
// 	i = 0;
// 	if (start >= ft_strlen(s) || len == 0)
// 	{
// 		ans = malloc(sizeof(char) * 1);
// 		if (ans == NULL)
// 			return (NULL);
// 		*ans = '\0';
// 		return (ans);
// 	}
// 	if (start + len > ft_strlen(s))
// 		sub_len = ft_strlen(s) - start;
// 	else
// 		sub_len = len;
// 	ans = malloc(sizeof(char) * (sub_len + 1));
// 	if (ans == NULL)
// 		return (NULL);
// 	while (i < sub_len && s != '\0')
// 	{
// 		ans[i] = s[start + i];
// 		i++;
// 	}
// 	ans[i] = '\0';
// 	return (ans);
// }