#include <stdio.h>
#include <math.h>

//Creates a tower from #
int main(void){ 
    int height, level, width;
    
    //Checking the entered value
    do{ 
        printf ("height: ");
        scanf ("%d", &height);
    }
    while (height < 1 || height > 22);
    
    //Building a tower
    for ( level = 0; level < height; level++){ 
        for (width = 0; width <= height + 1; width++){
            if (width <height - level + 1){
                printf (" ");
            }
            else if (width >= height-level){
                 printf("#");
            }
        }
        printf ("\n");
    }
}
