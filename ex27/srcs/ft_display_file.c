/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:27:41 by josemigu          #+#    #+#             */
/*   Updated: 2025/04/04 19:45:58 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str);

bool	process_file(char *file)
{
	int		fd;
	char	content[255];
	int		bytes_read;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (false);
	bytes_read = read(fd, content, 1);
	while (bytes_read > 0)
	{
		write(1, content, bytes_read);
		bytes_read = read(fd, content, 1);
	}
	close(fd);
	return (true);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	if (!process_file(argv[1]))
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	return (0);
}
