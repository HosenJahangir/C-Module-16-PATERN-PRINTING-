#include <stdio.h>
void no_ret_p(int one, int two)
{
    int mult = one * two;
    printf("%d", mult);
}

int main()
{
    int a = 9;
    int b = 8;
    no_ret_p(a, b);
    return 0;
}