#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    //  Your code goes here

    // Created variables
    int diceRolls[100];
    float averageSum;
    int totalSum = 0;

    // Create for-loop that counts dice rolls

    for(int i = 0; i < 100; i++)
    {
        diceRolls[i] = (rand() % 6) + 1;
    }

    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;

    for(int i = 0; i < 100; i++)
    {
        if(diceRolls[i] == 1)
        {
            one++;
        }
        if(diceRolls[i] == 2)
        {
            two++;
        }
        if(diceRolls[i] == 3)
        {
            three++;
        }
        if(diceRolls[i] == 4)
        {
            four++;
        }
        if(diceRolls[i] == 5)
        {
            five++;
        }
        if(diceRolls[i] == 6)
        {
            six++;
        }
        totalSum += diceRolls[i];
    }
    averageSum = totalSum / 100.0;

    printf("%d\n", one);
    printf("%d\n", two);
    printf("%d\n", three);
    printf("%d\n", four);
    printf("%d\n", five);
    printf("%d\n", six);
    printf("%d\n", totalSum);
    printf("%.1f\n", averageSum);
    
    return 0;
}
