/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:05:17 by soyamaza          #+#    #+#             */
/*   Updated: 2023/05/28 17:31:40 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;
	size_t	max;

	i = 0;
	if (dest == NULL && size == 0)
		return (ft_strlen(src));
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest)
		return (size + len_src);
	max = size - len_dest - 1;
	while (i < max)
	{
		if (src[i] == '\0')
			break ;
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[i + len_dest] = '\0';
	return (len_dest + len_src);
}

// #include <stdio.h>
// #include <string.h>

// int    main(void)
// {
//     char dest1[20] = "ABCDE";
//     char src1[] = "1234";
//     char dest2[20] = "ABCDE";
//     char src2[] = "1234";
//     char dest3[20] = "ABCDE";
//     char src3[] = "1234";
//     char dest4[20] = "ABCDE";
//     char src4[] = "1234";
//     char dest5[20] = "ABCDE";
//     char src5[] = "1234";
//     char dest6[20] = "ABCDE";
//     char src6[] = "1234";

//     int x = 2;
//     unsigned int result1 = ft_strlcat(dest1, src1, x);
//     printf("ft: %s: %u\n", dest1, result1);
//     unsigned int resule2 = strlcat(dest2, src2, x);
//     printf("lib %s: %u\n", dest2, resule2);

//     int y = 7;
//     unsigned int result3 = ft_strlcat(dest3, src3, y);
//     printf("ft: %s: %u\n", dest3, result3);
//     unsigned int result4 = strlcat(dest4, src4, y);
//     printf("lib %s: %u\n", dest4, result4);

//     int z = 13;
//     unsigned int result5 = ft_strlcat(dest5, src5, z);
//     printf("ft: %s: %u\n", dest5, result5);
//     unsigned int result6 = strlcat(dest6, src6, z);
//     printf("lib %s: %u\n", dest6, result6);
//     return (0);
// }