/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:00:22 by soyamaza          #+#    #+#             */
/*   Updated: 2023/05/31 13:55:06 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	if (size == 0)
		return (ft_strlen(src));
	len = ft_strlen(src);
	while (size > 1 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	return (len);
}

// #include <stdio.h>
// #include <string.h>

// int    main(void)
// {
//     int    len;
//     char str[] = "abcdefg";
//     char buffer[5];

//     // len = ft_strlcpy(buffer, str, 2);
//     // printf("%d\n", len);
//     // printf("%s\n", str);
//     // printf("%s\n", buffer);

//     len = strlcpy(buffer, str, 2);
//     printf("--%d\n", len);
//     printf("--%s\n", str);
//     printf("--%s\n", buffer);
//     return (0);
// }