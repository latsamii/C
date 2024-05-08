/*
Latsami Luanglaj
A5: Functions 2
COP 3223
03.01.24
*/

#include <stdio.h>

double regularPay(double *payPerHour, int *regWorkWeek, int *hoursWorked){    
      if(*hoursWorked < *regWorkWeek){
        return *payPerHour * *hoursWorked;
      } else if(*hoursWorked >= *regWorkWeek){
        return *regWorkWeek * *payPerHour;
      }
}

double overtimePay(double *payPerHour, int *regWorkWeek, int *hoursWorked, double *overtimeRate){
    if(*hoursWorked >= *regWorkWeek){
        return ((*hoursWorked - *regWorkWeek) * *payPerHour) * *overtimeRate;
      } else {
        return 0;
      }
}

int main(){
    int regWorkWeek, weeks, hoursWorked;
    double payPerHour, overtimeRate;

    printf("How much are you paid per hour?\n");
    scanf("%lf", &payPerHour);

    printf("How many hours in a regular week?\n");
    scanf("%d", &regWorkWeek);

    printf("What is the overtime rate?\n");
    scanf("%lf", &overtimeRate);

    printf("How many weeks are you working?\n");
    scanf("%d", &weeks);

    for(int i = 1; i < weeks + 1; i++){
      printf("How many hours did you work in week %d\n", i);
      scanf("%d", &hoursWorked);

      regularPay(&payPerHour, &regWorkWeek, &hoursWorked);
      overtimePay(&payPerHour, &regWorkWeek, &hoursWorked, &overtimeRate);

      printf("\nWeek %d\nRegular pay = %.1lf\nOvertime pay = %.1lf\n", i, regularPay, overtimePay);
    }

    return 0;
}