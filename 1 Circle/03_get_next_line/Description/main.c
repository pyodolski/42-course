#include "get_next_line.h"
#include <fcntl.h> // 파일제어와 관련된 함수를 쓸 때 사용
#include <stdio.h>


int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
//	int		fd2;
//	int		fd3;
	fd1 = open("tests/test.txt", O_RDONLY); // O_RDONLY는 읽기 전용으로 파일을 열겠다
//	fd2 = open("tests/test2.txt", O_RDONLY);
//	fd3 = open("tests/test3.txt", O_RDONLY);
	i = 1;
	while (i < 5)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
//		line = get_next_line(fd2);
//		printf("line [%02d]: %s", i, line);
//		free(line);
//		line = get_next_line(fd3);
//		printf("line [%02d]: %s", i, line);
//		free(line);
		i++;
	}
	close(fd1);
//	close(fd2);
//	close(fd3);
	return (0);
}