/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etamazya <el.tamazyan03@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:03:10 by etamazya          #+#    #+#             */
/*   Updated: 2025/03/04 21:39:46 by etamazya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

int main(int argc, char **argv)
{
	int		fd;
	t_data	*data;

	fd = 0;
    data = NULL;
    (void)data;
	if (argc != 2)
        print_error(data, "Error: Invalid amount of arguments.\n");
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
        print_error(data, "Error: Invalid file.\n");
	is_fd_valid(data, argv[1]);
	// map.data = fd_parse(fd);
    return (0);
}