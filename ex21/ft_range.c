/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 19:39:15 by josemigu          #+#    #+#             */
/*   Updated: 2025/04/03 19:52:25 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
		return (0);
	array = malloc((max - min) * sizeof array);
	if (!array)
		return (0);
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/* 
int	main(void)
{
	int	*array;
	
	array = ft_range(2, 5);

	for (int i=0; i<; i++ )
	{
		printf("%d\n", array[i]);
	}
}
 */