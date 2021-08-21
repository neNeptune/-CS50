#include <stdio.h>
#include <math.h>

/*considers the minimum number of coins of face value 25, 10, 5, 1
to be issued by the change of the specified amount*/

int main(void){ 
    float dollars;
    printf("O hai! ");
    
    // We read the amount from which we need to calculate the change and check it
    do{ 
    printf("How much change is owed?($)\n");
    scanf ("%f", &dollars);
    }
    while(dollars <= 0);
    
    //Conversion from dollars to cents
    dollars = dollars*100;
    int cents;
    cents = (int) dollars;
    
    //Counting the change
    int NumberOfCoins = 0;
    int cent25 = 0;
    int cent10 = 0;
    int cent5 = 0;
    int cent1 = 0;
    while(cents > 0){
        while (cents - 25 >= 0){
            cents-=25;
            NumberOfCoins++;
            cent25++;
        }
        while (cents - 10 >= 0){
            cents-=10;
            NumberOfCoins++;
            cent10++;
        }
        while (cents - 5 >= 0){
            cents-=5;
            NumberOfCoins++;
            cent5++;
        }
        while (cents - 1 >= 0){
            cents-=1;
            NumberOfCoins++;
            cent1++;
        }
    }

    //We output the number of coins
    printf("Number of coins: %d \nNumber of twenty five cents: %d \nNumber of ten cents: %d \nNumber of five cents: %d \nNumber of one cent: %d \n" , NumberOfCoins , cent25 , cent10 , cent5 , cent1);
}
