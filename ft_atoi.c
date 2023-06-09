/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:02:55 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/04 17:50:31 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			minus;
	long long	num;
	int			c;

	num = 0;
	minus = 1;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		c = *str - '0';
		if (minus == 1 && num > (LONG_MAX - c) / 10)
			return ((int)LONG_MAX);
		else if (minus == -1 && (num * -1) < (LONG_MIN + c) / 10)
			return ((int)LONG_MIN);
		num = num * 10 + c;
		str++;
	}
	return (minus * (int)(num));
}

// #include <stdio.h>

// int    main(void)
// {
//     char *str1 = "       \n \t \f \v \r---+--+1234ab567";
//     char *str2 = "-9223372036854775808";
//     char *str3 = "-9223372036854775809";
//     printf("%d:%d\n", ft_atoi(str1), atoi(str1));
//     printf("%d:%d\n", ft_atoi(str2), atoi(str2));
//     printf("%d:%d\n", ft_atoi(str3), atoi(str3));
//     return (0);
// }