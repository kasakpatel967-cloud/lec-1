#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long long card= get_long_long("Enter card number:");
    long long temp= card;
    int sum=0;
    int count=0;
    int firsttwo, firstone;
    //luhn's algorithm
    while(temp>0)
    {
        //last digit (not multiplied)
        int digit1 = temp%10;
        sum += digit1;
        temp /= 10;
        count++;

        // second last digit (multiplied by 2)
        if(temp>0)
        {
            int digit2 = temp%10;
            digit2 *=2;
            // add digits if result > 9
            if(digit2>9)
            {
                sum += (digit2/10)+(digit2%10);
            }
            else
            {
                sum+=digit2;
            }
            temp /= 10;
            count++;
        }
    }
    temp=card;
    while(temp>=100)
    {
        temp /=10;
    }
    firsttwo = temp;
    firstone = temp/10;

    if(sum%10==0)
    {
        if((firsttwo==34 || firsttwo==37) && count ==15)
        {
            printf("AMEX\n");
        }
        else if((firsttwo >=51 && firsttwo<=55) && count==16)
        {
            printf("MASTERCARD\n");
        }
        else if(firstone ==4 && (count ==13 || count == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
}
