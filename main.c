#include <stdio.h>

int main()
{
    int p[3] = {65, 0, 1, 257};
    char    *str = (char *)p;
    printf("%c", str[0]);

}
