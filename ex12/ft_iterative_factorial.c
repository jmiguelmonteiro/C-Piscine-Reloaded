/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:01:30 by josemigu          #+#    #+#             */
/*   Updated: 2025/04/02 17:00:11 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <time.h>

int	ft_iterative_factorial(int nb)
{
	long int	result;

	result = 1;
	if (nb < 0)
		result = 0;
	while (nb > 1)
	{
		result *= nb--;
		if (result > INT_MAX)
			return (0);
	}
	return (result);
}
/* 
int	main(void)
{
	time_t	curr;

	printf("Factorial of -1 is %d\n", ft_iterative_factorial(-1));
	printf("Factorial of 0 is %d\n", ft_iterative_factorial(0));
	printf("Factorial of 1 is %d\n", ft_iterative_factorial(1));
	printf("Factorial of 5 is %d\n", ft_iterative_factorial(5));
	time(&curr);
	printf("Initial timestamp %s\n", ctime(&curr));
	printf("Factorial of INT_MAX is %d\n", ft_iterative_factorial(INT_MAX));
	time(&curr);
	printf("Final timestamp %s\n", ctime(&curr));
	time(&curr);
	printf("Initial timestamp %s\n", ctime(&curr));
	printf("Factorial of 1000 is %d\n", ft_iterative_factorial(12));
	time(&curr);
	printf("Final timestamp %s\n", ctime(&curr));
}
 */