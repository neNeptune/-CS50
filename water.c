#include <stdio.h>
#include <math.h>

//Counts the number of liter bottles of water that will be collected from the tap after a given time
int main(void){ 
    int min;
    
    //The number of minutes is entered
    printf("waterminutes:");
    scanf ("%d", &min); 
    
    //The number of bottles is displayed
    printf("\nbotles: %d", min*6); 
    return (0);
}
