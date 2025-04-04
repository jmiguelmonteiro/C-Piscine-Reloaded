/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 12:38:40 by josemigu          #+#    #+#             */
/*   Updated: 2025/04/04 14:54:02 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, &*str++, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == INT_MIN)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
/* 
int	main(void)
{
	int	a[4];
	int	*ptr;

	a[0] = 2;
	a[1] = 6;
	a[2] = 3;
	a[3] = 10;

	ptr = a;

	ft_foreach(ptr, 4, &ft_putnbr);
}
 */