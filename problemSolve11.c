#include<stdio.h>
int main()
{
    float marks;
    printf("Enter your marks :");
    scanf("%f",&marks);
    if(marks>=90)
    {
        printf("Grade A");
    }
    else if(marks>=86)
    {
        printf("Grade A-");
    }
    else if(marks>=82)
    {
        printf("Grade B+");
    }
    else if(marks>=78)
    {
        printf("Grade B");
    }
    else if(marks>=74)
    {
        printf("Grade B-");
    }
    else if(marks<=55)
    {
        printf("Grade F");
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}
