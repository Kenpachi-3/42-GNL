/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:10:46 by ntshuma           #+#    #+#             */
/*   Updated: 2026/10/15 15:28:05 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl>
#include <stdio.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
    char	*line;
    int		line_count;
    int		fd;

	if (argc < 2)
	{
		printf("Usage: %s <filename>\n", argv);
		return (1);
	}
	fd = open(argv[4], 0_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		return (1);
	}
	line_count = 1;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("[Line %02d]: %s", line_count++, line);
		free(line);
	}
	close(fd);
	return (0);
}