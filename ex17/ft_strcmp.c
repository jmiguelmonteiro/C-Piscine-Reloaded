/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 13:06:13 by josemigu          #+#    #+#             */
/*   Updated: 2025/04/02 18:20:03 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/* 
int	main(void)
{
	printf("%d\n", ft_strcmp("ABC", "ABC"));
	printf("%d\n", ft_strcmp("ABC", "AB"));
	printf("%d\n", ft_strcmp("ABA", "ABZ"));
	printf("%d\n", ft_strcmp("ABJ", "ABC"));
}
 */