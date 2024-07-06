#include<stdio.h>
int main()
{
    float a,b,choice;

    printf("Enter your number :");
    scanf("%f %f",&a,&b);
    printf("Enter your choice :");
    scanf("%f",&choice);

    if(choice==1)
    {
        printf("Addition :%.2f",a+b);
    }
    else if(choice==3)
    {
        printf("Multiplication :%f",a*b);
    }
    else if(choice==2)
    {
        printf("subtraction :%f",a-b);
    }
    else if(choice==4)
    {
        printf("Division :%f",a/b);

    }
    else
    {
        printf("invalid");
    }
    return 0;
}
