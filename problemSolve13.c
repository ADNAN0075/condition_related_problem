#include<stdio.h>
int main()
{
    float a,b;
    int choice,ch;

    printf("Enter your number :");
    scanf("%f %f",&a,&b);
    printf("Enter your choice-1, 2, 3, 4  :");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("Addition :%f",a+b);
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
        printf("Enter your choice:");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("Quotient :%f",a/b);
        }
        else if(ch==2)
        {
            printf("Reminder :%d",(int)a%(int)b);
        }

    }

    return 0;
}
