/*
Latsami Luanglaj
Lab Assignment 2
COP3223
01/20/24
*/

#include <stdio.h>

int main(){
    int people;
    double totalPrice;

    printf("How many people are going?\n");
    scanf("%d", &people);

    if(people < 20){
        totalPrice = (people - 1) * 9.75 + 8.50;
        printf("The group's price is $%.2lf", totalPrice);
    }

    if(people >= 20){
        totalPrice = people * 7.50;
        printf("The group's price is $%.2lf", totalPrice);
    }
   
    return 0;
}