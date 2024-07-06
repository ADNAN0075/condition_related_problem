#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number :");
    scanf("%d",&num);

    if(num!=0)
    {
        if(num < 0)
        {
            printf("Negative input is not valid");
        }
        else if((num &(num-1))==0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }

    }
    else
    {
        printf("Zero is not valid input :");
    }
    return 0;
}
