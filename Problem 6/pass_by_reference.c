#include <stdio.h>

void fake(int *p)
{
    *p = 200;
}

int main()
{
    int n = 100;
    fake(&n);
    return 0;
}
// In pass by reference we send the address of a variable from main function to the fake function not the value like pass by value. And by Dee reference which looks like *p we can change the value of a variable which is in the main function. But in the pass by value, we can't change the value of a variable which is in a diffrent function.