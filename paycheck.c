/*
Latsami Luanglaj
A5: Functions 2
COP 3223
03.02.24
*/

#include <stdio.h>

double regularPay(double payPerHour, int regWorkWeek, int hoursWorked){    
      if(hoursWorked < regWorkWeek){
        return payPerHour * hoursWorked;
      } else if(hoursWorked >= regWorkWeek){
        return regWorkWeek * payPerHour;
      }
}

double overtimePay(double payPerHour, int regWorkWeek, int hoursWorked, double overtimeRate){
    if(hoursWorked >= regWorkWeek){
        return ((hoursWorked - regWorkWeek) * payPerHour) * overtimeRate;
      } else {
        return 0;
      }
}

int main(){

// Sets variables as either int or double
    int regHours, weeks, hours;
    double hourWage, overtime, total, pay, ot, totalPay;

 // Asks for user input   
    printf("How much are you paid per hour?\n");
    scanf("%lf", &hourWage);

    printf("How many hours in a regular week?\n");
    scanf("%d", &regHours);

    printf("What is the overtime rate?\n");
    scanf("%lf", &overtime);

    printf("How many weeks are you working?\n");
    scanf("%d", &weeks);

// Sets the variable total to 0
    total = 0;

// For loop that starts at 1 and ends at the amount of weeks user set
    for(int i = 1; i < weeks + 1; i++){
// User input for amount of hours worked
        printf("How many hours did you work in week %d\n", i);
        scanf("%d", &hours);

// Calls regularPay and overtimePay with parameters from user input and sets them as pay and ot
        pay = regularPay(hourWage, regHours, hours);
        ot = overtimePay(hourWage, regHours, hours, overtime);
// totalPay calculated from adding pay and ot
        totalPay = pay + ot;
// totalPay is being added to total
        total += totalPay;
// Print statement at end of loop stating regular pay, overtime, and total pay at end of week
        printf("\nWeek %d\nRegular pay = $%.2lf\nOvertime pay = $%.2lf\nTotal pay = $%.2lf\n", i, pay, ot, totalPay);

    }
// Total amount printed after for loop ends
    printf("\nTotal pay for %d weeks = $%.2lf", weeks, total);

    return 0;
}