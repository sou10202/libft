/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:50:22 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/09 18:52:48 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	if (s == NULL)
		return (-1);
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		count++;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
		}
	}
	return (count);
}

static size_t	check_div_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s == c && *s != '\0')
		s++;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

static char	*cpy(char *dest, char const *src, unsigned int n)
{
	char	*p;

	if (dest == NULL)
		return (NULL);
	p = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (p);
}

static void	cpy_malloc(size_t div_len, char const *s, char **sp, size_t i)
{
	sp[i] = cpy(malloc(sizeof(char) * (div_len + 1)), s, div_len);
	if (sp[i] == NULL)
	{
		free (sp);
		return ;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	div;
	char	**sp;
	size_t	i;
	int		div_len;

	if (s == NULL)
		return (NULL);
	div = count_words(s, c);
	sp = malloc(sizeof(char *) * (div + 1));
	if (sp == NULL)
		return (NULL);
	i = 0;
	while (i < div)
	{
		div_len = check_div_len(s, c);
		while (*s == c)
			s++;
		cpy_malloc(div_len, s, sp, i);
		if (sp == NULL)
			return (NULL);
		i++;
		s += div_len;
	}
	sp[i] = NULL;
	return (sp);
}

// int    main(void)
// {
//     char    *str;
//     char    charset = '\0';
//     char    **ans;

//     str = "\0aaa\0bb";
//     // ans = ft_split(str, charset);
//     size_t	i = count_words(str, charset);
// 	// printf("0: %s\n", ans[0]);
//     // printf("1: %s\n", ans[1]);
//     // printf("2: %s\n", ans[2]);
//     // printf("3: %s\n", ans[3]);
//     // printf("4: %s\n", ans[4]);
// 	// printf("5: %s\n", ans[5]);
// 	// free(ans);

// 	printf("%zu\n",i);
// }
