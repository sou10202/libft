/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:37:12 by soyamaza          #+#    #+#             */
/*   Updated: 2023/05/24 18:38:46 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	char	*p;

	p = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}

char	*ft_strdup(const char *src)
{
	char	*des;
	int		len;

	len = ft_strlen(src);
	des = malloc(sizeof(char) * (len + 1));
	if (des == NULL)
		return (NULL);
	ft_strcpy(des, src);
	return (des);
}

// int    main(void)
// {
//     char    *src;
//     char    *dest;

//     src = "hello";
//     dest = ft_strdup(src);
//     printf("src: %s &src: %p\n", src, &src);
//     printf("dest: %s &dest:%p\n", dest, &dest);
// 	free(dest);
// }
