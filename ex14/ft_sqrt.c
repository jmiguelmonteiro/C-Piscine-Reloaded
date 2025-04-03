/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:01:30 by josemigu          #+#    #+#             */
/*   Updated: 2025/04/02 17:50:17 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <time.h>

int	ft_sqrt(int nb)
{
	int	result;
	int	temp;

	temp = 1;
	result = 0;
	while (nb > 0)
	{
		nb -= temp;
		temp += 2;
		result++;
	}
	if (nb == 0)
		return (result);
	else
		return (0);
}
/* 
int	main(void)
{
	time_t	curr;

	printf("Sqrt of -1 is %d\n", ft_sqrt(-1));
	printf("Sqrt of 0 is %d\n", ft_sqrt(0));
	printf("Sqrt of 1 is %d\n", ft_sqrt(1));
	printf("Sqrt of 5 is %d\n", ft_sqrt(5));
	printf("Sqrt of 9 is %d\n", ft_sqrt(9));
	time(&curr);
	printf("Initial timestamp %s\n", ctime(&curr));
	printf("Sqrt of 2147395600 is %d\n", ft_sqrt(2147395600));
	time(&curr);
	printf("Final timestamp %s\n", ctime(&curr));
	time(&curr);
	printf("Initial timestamp %s\n", ctime(&curr));
	printf("Sqrt of INT_MAX is %d\n", ft_sqrt(INT_MAX));
	time(&curr);
	printf("Final timestamp %s\n", ctime(&curr));
}
 */