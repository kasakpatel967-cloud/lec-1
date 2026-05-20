#include <stdio.h>
#include <cs50.h>

int main(void)
{    int coins = 0;
    int cent=get_int("Change owned:");
    if(cent<0)
    {
        cent=get_int("Change owned:");
    }
    //count quarters
    coins += cent/25;
    cent = cent % 25;

    //count dimes
    coins += cent/10;
    cent = cent % 10;

    //count nickels
    coins += cent/5;
    cent = cent % 5;

    //count penny
    coins += cent/1;
    cent =cent % 1;

    printf("%d\n",coins);
}
