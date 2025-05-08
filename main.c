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

    for(int i = 0; i <= 100; i++)
    {
        diceRolls[i] = (rand() % 6) + 1;
        printf("%d\n", &diceRolls[i]);
    }


  

    return 0;
}
