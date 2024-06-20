## GNL을 실행하는 방법
### 먼저 cc를 해줌
cc -Werror -Wall -Wextra -g -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c 
### a.out 실행파일 생기면
./a.out tests/t1.txt
### 누수체크
valgrind --leak-check=full ./a.out test/t1.txt
