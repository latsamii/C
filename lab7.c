/*
Latsami Luanglaj
Lab 7
COP 3223
03.03.24
*/

#include <stdio.h>
int menu();
void promote(int grade[]);
void view(int grade[]);

int menu() {
    int choice;
    printf("\nMain Menu\n");
    printf("1. Promote\n");
    printf("2. View Enrollment\n");
    printf("3. Exit\n");
    printf("What do you choose?\n");
    scanf("%d", &choice);
    return choice;
}

void promote(int grade[]){
    for(int i = 4; i >= 0; i--) {
        grade[i + 1] = grade[i];
    }

    printf("How many students are in grade K?\n");
    scanf("%d", &grade[0]);

}

void view(int grade[]) {
    printf("Grade K: %d\n", grade[0]);
    for(int i = 1; i < 6; i++){
        printf("Grade %d: %d\n", i, grade[i]);
    }
}

int main() {
    int grade[6];

    printf("Welcome to School\n");

    printf("How many students are in grade K?\n");
    scanf("%d", &grade[0]);

    for(int i = 1; i < 6; i++){
        printf("How many students are in grade %d\n", i);
        scanf("%d", &grade[i]);
    }

    int choice = 0;

    choice = menu();

    while (choice != 3) {
        switch(choice) {
            case 1:
                promote(grade);
                break;
            case 2:
                view(grade);
                break;
            default:
                printf("Choose an option.\n");
        }
        choice = menu();
    }
    printf("Goodbye.\n");

    return 0;
}