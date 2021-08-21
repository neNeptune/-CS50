#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Encrypting the text using the Caesar cipher
int main(int argc, char argv[])
{
    argc = 2;
    printf("Please, enter k: ");
    scanf ("%c", &argv[1]);
    
    int k = atoi(argv[1]);
    printf ("%i", k);
    if (k < 0){
        return 1;
    }
    return 0;
}
