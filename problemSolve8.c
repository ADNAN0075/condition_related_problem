#include<stdio.h>
int main()
{
    int Year;
    printf("Enter your Year :");
    scanf("%d",&Year);

    if( (Year % 4 == 0 && Year % 100 != 0) || ( Year % 400 ==0 ) )
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
