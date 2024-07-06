#include<stdio.h>
int main()
{
    float num;
    printf("Enter your Number:");
    scanf("%f",&num);

    if(num<0)
    {
        printf("Negative");
    }
    else
    {
        printf("positive");
    }
    return 0;
}
