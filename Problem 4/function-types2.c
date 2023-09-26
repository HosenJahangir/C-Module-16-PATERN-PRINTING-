#include <stdio.h>

int ret_no_p(void)
{
    int a = 4;
    int b = 3;
    int sum = a + b;

    return sum;
}

int main()

{
    int total = ret_no_p();
    printf("%d", total);
    return 0;
}