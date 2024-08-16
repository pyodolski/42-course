#include <unistd.h>

int main(void)
{
    char c[11] = "hello world!";
    while(*c)
    {
	write(1,&c, 1);
	c++;
    }
    return(0);
}
