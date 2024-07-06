#include<stdio.h>
int main()
{
    int X,Y;
    printf("Enter your number :");
    scanf("%d %d",&X,&Y);

    if(X>Y)
    {
        printf("%d is greater than %d",X,Y);
    }
    else if(X<Y)
    {
        printf("%d is less then %d",X,Y);
    }
    else if(X==Y)
    {
        printf("%d is equal to %d",X,Y);
    }
    else
    {
        printf("Invalid number ");
    }
    return 0;

}
