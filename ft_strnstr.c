/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:32:38 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/04 15:47:33 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*tmp;
	size_t	i;

	if (big == NULL && len == 0)
		return (NULL);
	tmp = (char *)big;
	i = 0;
	if (*little == '\0')
		return (tmp);
	while (*tmp != '\0' && i < len)
	{
		if ((ft_strncmp(tmp, little, ft_strlen(little)) == 0) && (i
				+ ft_strlen(little) <= len))
			return (tmp);
		tmp++;
		i++;
	}
	return (NULL);
}

// #include <string.h>
// int	main(void)
// {
// 	char	*ans1;
// 	char	*ans2;

// 	ans1 = ft_strnstr(((void *)0), "fake", 1);
// 	ans2 = strnstr(((void *)0), "fake", 1);
// 	printf("%s:\n",ans2);
// }