#include <stdio.h>
int p_met(int one, int two)
{
    int total = one + two;
    return total;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = p_met(a, b);
    printf("%d", sum);

    return 0;
}