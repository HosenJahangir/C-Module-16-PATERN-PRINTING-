#include <stdio.h>
void examp(int one)
{
    printf("%d\n", one);
    one = 100;
    printf("%d", one);
}
int main()
{
    int one = 9;
    examp(one);

    return 0;
}
/*In the main function I have called examp function then I passed the value of int one to the examp function but not the variable one itself from main function. As a result I can receive the value of main function in the examp function even in a different name but the variable type has to be the same. After pasing the value from the main function, I have printed its value and it was same  value 9 as in the main function. Then I changed the value of one in the examp function and printed it. this time it is 100 as the new value is 100.
Now if I go back to the main function and print the value of one, it will still be 9 in the main function as they are diffrent variavles and they belong to different functions and in the memory they reserve different addresses.*/