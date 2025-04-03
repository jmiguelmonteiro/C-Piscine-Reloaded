/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:27:42 by josemigu          #+#    #+#             */
/*   Updated: 2025/04/02 15:49:34 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/* 
int	main(void)
{
	int	value1 = 1;
	int	value2 = 2;

	printf("Antes: %d %d\n", value1, value2);
	ft_swap(&value1, &value2);
	printf("Depois: %d %d\n", value1, value2);
}
 */