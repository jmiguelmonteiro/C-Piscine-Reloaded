/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 12:38:40 by josemigu          #+#    #+#             */
/*   Updated: 2025/04/04 15:43:17 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/* int	ft_check(char *str)
{
	if (*str == ' ')
		return (1);
	else
		return (0);
}
 */
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (*tab)
	{
		if (f(*tab) == 1)
			i++;
		tab++;
	}
	return (i);
}
/* 
int	main(void)
{
	char	*a[] = {" ", "b", " ", 0};

	printf("%d", ft_count_if(a, &ft_check));
}
 */