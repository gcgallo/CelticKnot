/* celtic knot*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, j, k; 
    char *ptr;
    int strands = strtol(argv[1], &ptr, 10);
    int repeat = strtol(argv[2], &ptr, 10);
    int knot1[10];
    int knot2[10];
    j = 0; 
    // create duplicate arrays
    for(i=0 ; i<strands ; i++){
    
        //printf("%i%i ", i, i); 
        knot1[i] = j;
	knot2[i] = j;
	if(i%2) j++;
    }

    printf("\n");
     
    for(k=0 ; k<repeat ; k++){
        halfknot(knot1, strands);
        halfknot(knot2, strands);
    }
    /* for(i=0 ; i<strands ; i++){ */
    /*     printf("%i  ",  knot1[i]); */ 
    /* } */
    /* printf("\n"); */
 
    /* for(i=0 ; i<strands ; i++){ */
    /*     printf("%i  ",  knot2[i]); */ 
    /* } */
    /* printf("\n"); */

    /* for(j=0 ; j<strands ; j++){ */ 
    /*     for(i=0 ; i<strands-1 ; i++){ */

    /*     printf("%i%i ", i, i); */ 

    /*     } */
    /* } */ 

    return 0;
}

void halfknot(int knot[], int strands){
    
    int i;	

    for(i=0 ; i< strands ; i++){
        printf("%i  ",  knot[i]); 
    }
    printf("\n");
    
    return 0; 

}
