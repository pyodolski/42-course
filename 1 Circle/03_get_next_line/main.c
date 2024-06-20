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

//cc -Werror -Wall -Wextra -g -fsanitize=address get_next_line.c get_next_line_utils.c main.c
//cc -Werror -Wall -Wextra -g -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c
