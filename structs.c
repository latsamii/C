/*
Latsami Luanglaj
A10 Structs 1
COP 3223
04.14.24
*/

#include <stdio.h>
#include <stdlib.h>

int menu();

struct course {
    char name[30], number[10];
    struct course *next;
};

struct linkedList {
    struct course *head;
};

void add(struct linkedList *list, char *number, char *name) {
    if(sameCourse(list, number)) {
        return;
    }

    strcpy(newCourse->name, name);
    strcpy(newCourse->number, number);

    if(list->head == NULL) {
        list->head = newCourse;
    }
    printf("Added!\n");
}

void delete(struct linkedList *list, char *number) {
     if(list->head == NULL) {
        printf("You aren't currently taking any courses.\n");
     }

     struct course *current = list->head;
     struct course *prev = NULL;

     while(current != NULL) {
        if(strcmp(current->number, number) == 0) {
            if(prev == NULL) {
                list->head = current->next;
            } else {
                prev->next = current->next;
            }
            printf("Course has been removed.\n");
        }
        prev = current;
        current = current->next;
     }
     printf("This course is not in your schedule.\n");
}

void schedule(struct linkedList *list) {
    if(list->head == NULL) {
        printf("%s - %s", current->number, current->name);
    }
}

void sameCourse(struct linkedList *list, char *number) {
    struct course *current = list->head;
}

int menu() {
    int choice;
    printf("What courses would you like to do?\n");
    printf("1. Add Course\n");
    printf("2. Drop Course\n");
    printf("Print Schedule\n");
    printf("Exit\n");
    scanf("%d", &choice);
    return choice;
}

int main() {
    struct linkedList;
    struct course;
    char name[30];
    char number[10];

    int choice = 0;

    choice = menu();

    while(choice != 4) {
        switch(choice) {
            case 1:
                printf("What course name would you like to add?\n");
                scanf("%s", name);
                printf("What course number would you like to add?\n");
                scanf("%s", number);
                add(&course, name, number);
                break;
            case 2:
                printf("What course would you like to drop?\n");
                scanf("%s", number);
                delete(&course, number);
                break;
            case 3:
                schedule(&course);
                break;
            case 4:
                printf("Done!\n");
            default:
                printf("Choose an option.\n");
        }
        choice = menu();
    }

    return 0;
}