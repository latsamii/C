/*
Latsami Luanglaj
COP3223
*/

#include <stdio.h>
#include <string.h>

int main() {
    char schedule[6][30];
    char input[30];
    int classes, dropped = 0;
    
    printf("Welcome to course registration!\n");

    printf("Enter a course code: \n");
    scanf("%s", input);

    printf("You have registered for the following courses: \n");
            for(int i = 2; i < classes; i++){
                printf("%d. %s", i, schedule[classes]);
            }

    while(strcmp(input, "EXIT") != 0){
        if(classes == 6){
            printf("You have registered for too many courses. Please pick one to delete.\n");
            printf("Enter a number between 1 and 6.\n");
            scanf("%d", &dropped);

            for(int i = dropped - 1; i < classes; i++){
                strcpy(schedule[i], schedule[i + 1]);
                classes--;
            }
        } else{
            printf("Enter the course code: \n");
            scanf("%s", input);

            strcpy(schedule[classes], input);
            classes++;

            printf("You have registered for the following courses: \n");
            for(int i = 2; i < classes; i++){
                printf("%d. %s", i, schedule[i]);
            }
        }
    }
    printf("Goodbye!");
    
    return 0;
}

    


    
