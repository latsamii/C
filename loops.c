/*
Latsami Luanglaj
A4: Loops 1
COP 3223
02/09/24
*/

#include <stdio.h>

int main(){
// Setting variables listed as integers
    int choice, totalRows, rows, totalSRows, stars, stripeRows;

// Asks for user input, based on input will determine path
    printf("What shape would you like to make? (1 - Triangle, 2 - Stripes)\n");
    scanf("%d", &choice);

// If input was 1, will make a triangle, and asks how many rows
    if(choice == 1){
        printf("How many rows would you like?\n");
        scanf("%d", &totalRows);

// For loop that starts that pattern with 1 being added to i, until it reaches the amount of rows the user inputted
// Second for loop, with rows going up, until it reaches the value of i
        for(int i = 1; i <= totalRows; i++){
            for(rows = 1; rows <= i; rows++){
                printf("*");
            }
            printf("\n");
        }
    }

// If input was 2, will make stripes, will asks how many rows, and how many stars in first row
    if(choice == 2){
        printf("How many rows would you like?\n");
        scanf("%d", &totalSRows);

        printf("How many stars in the first row?\n");
        scanf("%d", &stars);

// Like the first for loop, with 1 being added to i, until reaches the rows the user inputted
// Second for loop, determines how many stars will go in the line
        for(int i = 1; i <= totalSRows; i++){
            for(stripeRows = 1; stripeRows <= stars; stripeRows++){
        // If statement that if i is even, then the line will have one less star
                if(i % 2 == 0){
                    for(stripeRows = 1; stripeRows <= stars - 1; stripeRows++){
                        printf("*");
                    }
            // Else if statement that if i is odd, then the line will have the amount of stars in the first line
                } else if(i % 2 == 1) {
                    for(stripeRows = 1; stripeRows <= stars; stripeRows++){
                        printf("*");
                    }
                }
            }
            printf("\n");
        }
        
    }
    return 0;
}
