/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:14:47 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/09 18:57:45 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_in_set(char c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	need_len(char const *s1, char const *set)
{
	size_t		size;
	size_t		s1_len;
	char const	*tmp;

	tmp = s1;
	s1_len = ft_strlen(s1);
	size = 0;
	while (*s1 != '\0' && check_in_set(*s1, set))
	{
		size += check_in_set(*s1, set);
		s1++;
	}
	if (*s1 == '\0')
		return (0);
	s1 = tmp + s1_len - 1;
	while (*s1 != '\0' && check_in_set(*s1, set))
	{
		size += check_in_set(*s1, set);
		s1--;
	}
	return (s1_len - size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*ans;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	size = need_len(s1, set);
	ans = malloc(sizeof(char) * (size + 1));
	if (ans == NULL)
		return (NULL);
	i = 0;
	while (check_in_set(*s1, set))
		s1++;
	while (i < size)
	{
		ans[i] = *s1;
		i++;
		s1++;
	}
	ans[i] = '\0';
	return (ans);
}

// int	main(void)
// {
// 	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  
//Please\n Trim me !\n   \n \n \t\t\n  ";
// 	char *s2 = "Hello \t  Please\n Trim me !";
// 	char *ans = ft_strtrim(s2, "\n\t");

// 	printf("%s\n", ans);
// 	free(ans);
// }