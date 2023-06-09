/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:56:10 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/09 18:47:38 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	malloc_len(long num)
{
	size_t	i;

	i = 0;
	if (num < 0)
	{
		i = i + 1;
		num *= -1;
	}
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long long	num;
	char		*number;
	size_t		size;

	num = n;
	size = malloc_len(num);
	number = malloc(sizeof(char) * (size + 1));
	if (number == NULL)
		return (NULL);
	if (num < 0)
	{
		number[0] = '-';
		num *= -1;
	}
	number[size] = '\0';
	if (num == 0)
		number[0] = 0 + '0';
	while (num != 0)
	{
		number[--size] = num % 10 + '0';
		num /= 10;
	}
	return (number);
}

// int	main(void)
// {
// 	char	*p;

// 	p = ft_itoa(0);
// 	printf("%s\n",p);
// 	free(p);
// 	return (0);
// }