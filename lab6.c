/*
Latsami Luanglaj
Lab 6
02/26/24
*/

#include <stdio.h>

// Creates a function with the parameters of taking a double of the pointer price
void question3(double *price){
// if *price is less than 5 will multiply it by 2
    if(*price < 5){
        *price = *price * 2;
// if *price is equal to or greater than 5 or less than 10, will add a dollar and ten percent to *price
    } else if(*price >= 5 && *price < 10){
        *price = *price + (1 + (*price * 0.10));
// If the two conditions dont meet then twenty percent will be added to *price
    } else {
        *price = *price + (*price * 0.2);
    }
}

int main(){
    double itemOne, itemTwo, itemThree;

    printf("What is the price?\n");
    scanf("%lf", &itemOne);

    printf("What is the price?\n");
    scanf("%lf", &itemTwo);

    printf("What is the price?\n");
    scanf("%lf", &itemThree);

// Calls function with the inputs from user 
    question3(&itemOne);
    question3(&itemTwo);
    question3(&itemThree);

    printf("The values after inflation is: $%.2lf, $%.2lf, and $%.2lf", itemOne, itemTwo, itemThree);

    return 0;
} 