#include <stdio.h>
struct Student {
    char name[31];
    char studentID[10];
    double GPA;
};

int menuOption() {
 int option;
 printf("Menu\n");
 printf("1.) Add Students\n");
 printf("2.) Print Roster\n");
 printf("3.) Exit\n");
 scanf("%d", &option);
 return option;
}

void printRoster(struct Student s[], int size) {
    printf("\nName      Student ID  GPA\n");
    for(int i = 0; i < size; i++) {
        printf("\n%s  %s  %.2lf\n", s[i].name, s[i].studentID, s[i].GPA);
    }
}

int main() {
 struct Student studentArr[10];
 int studentsEnrolled = 0;
 int option = menuOption();
 while (option != 3) {
 switch (option) {
 case 1:
 if(studentsEnrolled < 10) {
    printf("What is your name?\n");
    scanf("%s", &studentArr[studentsEnrolled].name);

    printf("What is your ID?\n");
    scanf("%s", &studentArr[studentsEnrolled].studentID);

    printf("What is your GPA?\n");
    scanf("%lf", &studentArr[studentsEnrolled].GPA);

    studentsEnrolled++;
 }
 break;
 case 2:
 printRoster(studentArr, studentsEnrolled);
 break;
 }
 option = menuOption();
 }
 printf("Goodbye!");
 return 0;
}