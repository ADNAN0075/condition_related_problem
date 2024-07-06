#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your number:");
    scanf(" %c",&ch);

    if(ch>='a' && ch<='z' )
    {
        printf("Alphabet");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("Alphabet");
    }
    else if(ch>='1' && ch<='9')
    {
        printf("digit");
    }
    else
    {
        printf("special");
    }
    return 0;
}
