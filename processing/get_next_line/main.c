/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jupyo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:41:03 by jupyo             #+#    #+#             */
/*   Updated: 2024/07/17 14:41:07 by jupyo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int fd;
        char *line;

        fd = open(argv[1], O_RDONLY);
        while ((line = get_next_line(fd)))
        {
            printf("%s", line);
            free(line);
        }
    }
    else 
        printf("input error\n");
}
