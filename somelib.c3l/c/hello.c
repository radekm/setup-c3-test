
#include <stdio.h>

extern void say_hello(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Hello %d\n", i);
    }
}
