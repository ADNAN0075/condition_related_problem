#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number :");
    scanf("%d",&n);

    if((n&(n-1))==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
