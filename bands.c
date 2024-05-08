/*
Latsami Luanglaj
A4: Loops 2
COP 3223
02/07/24
*/

#include <stdio.h>

int main(){
// Takes variables for integers
    int bandOne, bandOneTime, totalBands, bandTime, totalTime;
// Sets totalTime to 0
    totalTime = 0;

// Asks for input from user, saves as variable, and then adds to totalTime
    printf("When does the first band come out?\n");
    scanf("%d", &bandOne);
    totalTime += bandOne;

// Asks how many bands will play, for the parameter of the for loop
    printf("How many bands will be playing tonight?\n");
    scanf("%d", &totalBands);

    printf("How long does band number 1 play?\n");
    scanf("%d", &bandOneTime);
    totalTime += bandOneTime;

// Prints when band 1 came out
    printf("Band #1 came out %d minutes.\n", bandOne);

// For loop for the other bands than band 1, and will stop at the number of bands described at the beginning
// Will print end time for how long the band played
    for(int i = 2; i < totalBands + 1; i++){
        printf("How long does band number %d play?\n", i);
        scanf("%d", &bandTime);
        printf("Band #%d came out at %d minutes.\n", i, totalTime);
        totalTime += bandTime;
    }

// Print statement for total set
    printf("The total set ended at %d minutes", totalTime);


    return 0;
}