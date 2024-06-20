#include <stdio.h>
#include "includes/ft_printf.h"

int main() {
    char *str = NULL;

    printf("%p", str);
    ft_printf("%p", str);
}
