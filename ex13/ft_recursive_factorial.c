/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:01:30 by josemigu          #+#    #+#             */
/*   Updated: 2025/04/02 17:32:47 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}
/* 
int	main(void)
{
	printf("Factorial of -1 is %d\n", ft_recursive_factorial(-1));
	printf("Factorial of 0 is %d\n", ft_recursive_factorial(0));
	printf("Factorial of 1 is %d\n", ft_recursive_factorial(1));
	printf("Factorial of 5 is %d\n", ft_recursive_factorial(5));
	printf("Factorial of 12 is %d\n", ft_recursive_factorial(12));
	printf("Factorial of 13 is %d\n", ft_recursive_factorial(13));
}
 */