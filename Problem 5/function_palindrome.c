#include <stdio.h>
#include <string.h>
int is_palindrome(char lady[])
{
    int palindrome = 1;
    int j = strlen(lady) - 1;
    for (int i = 0; i < j; i++)
    {
        if (lady[i] != lady[j])
        {
            palindrome = 0;
            break;
        }
        else
        {
            j--;
        }
    }
    return palindrome;
}
int main()
{
    char str[11];
    scanf("%s", &str);
    int output = is_palindrome(str);
    if (output) // if 0 comes as return condition is always false.
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}