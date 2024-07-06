#include<stdio.h>
int main()
{
    float num1,num2,choice;
    char ch;
    printf("Enter your number :");
    scanf("%f %f",&num1,&num2);
    printf("Enter your choice :");
    scanf("%f",&choice);

    if(choice==1)
    {
        printf("Addition :%.2f",num1+num2);
    }
    else if(choice==2)
    {
        printf("Multiplication :%f",num1*num2);
    }
    else if(choice==3)
    {
        printf("subtraction :%f",num1-num2);
    }
    else if(choice==4)

    {
        if(num2==0)
        {
            printf("Zero as divisor is not valid");
        }
        else
        {
            printf("Division: %f",num1/num2);
        }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
