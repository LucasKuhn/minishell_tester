/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalex-ku <lalex-ku@42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:32:45 by lalex-ku          #+#    #+#             */
/*   Updated: 2022/06/22 17:32:50 by lalex-ku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char const *argv[])
{
	int	pid;

	pid = fork();
	open("infile", O_RDONLY);
	while (1)
	{
		printf("Helloo miniHELL %i\n", pid);
		sleep(1);
	}
	return (0);
}
