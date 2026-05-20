#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int row= get_int("Enter number of rows:");
    if(row<0)
    {
        row=get_int("Enter number of rows:");
    }
    for(int i=1; i<=row; i++)
    {    //left triangle
        for(int j=1; j<=row-i; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
            printf("#");
        }
     //space between both triangle
        printf("  ");
        for(int j=1; j<=i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
