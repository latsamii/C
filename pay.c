#include <stdio.h.>

// Pre-conditions: payPerHour is a positive floating pt
// number representing the pay per hour. regWorkWeek
// represents the number of hours in a regular work week
// (int). hoursWorked is the number of hours the employee
// worked (int). 
// Post-condition: Returns the regular pay for the employee.
double regularPay(double payPerHour, int regWorkWeek, int hoursWorked){    
      if(hoursWorked < regWorkWeek){
        return payPerHour * hoursWorked;
      } else if(hoursWorked >= regWorkWeek){
        return regWorkWeek * payPerHour;
      }
}

// Here is a testing function to test your code and what it should print out:
void testRegularPay() {
    printf("%.2lf\n", regularPay(8.25, 40, 30));
    printf("%.2lf\n", regularPay(12.50, 30, 40));
    printf("%.2lf\n", regularPay(9.99, 80, 80));
}

int main() {
    testRegularPay();
    return 0;
}