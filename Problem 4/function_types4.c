#include <stdio.h>
void no_ret_noper(void)
{
    int a = 6;
    int b = 6;
    int quotient = a / b;
    printf("%d", quotient);
}

int main()
{
    no_ret_noper();
    return 0;
}