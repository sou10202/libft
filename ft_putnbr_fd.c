/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:59:28 by soyamaza          #+#    #+#             */
/*   Updated: 2023/06/04 14:49:00 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	num;

	num = n;
	if (num < 0)
	{
		num *= -1;
		write(fd, "-", 1);
	}
	c = num % 10 + '0';
	if (num < 10)
		write(fd, &c, 1);
	else
	{
		ft_putnbr_fd(num / 10, fd);
		write(fd, &c, 1);
	}
}
