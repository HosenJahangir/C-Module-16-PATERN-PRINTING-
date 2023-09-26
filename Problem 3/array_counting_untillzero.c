#include <stdio.h>
int count_before_zero(int size, int arry[])
{
    int num = 0;
    for (int i = 0; i < size; i++)
    {

        // condition
        if (arry[i] != 0)
        {
            num++;
        }
        if (arry[i] == 0)

        {
            break;
        }
    }
    return num;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count = count_before_zero(n, a);
    printf("%d", count);

    return 0;
}