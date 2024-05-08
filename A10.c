/*
Latsami Luanglaj
A10
COP3223
04.15.24
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu();
void add(char name[], char number[]);
void drop(char number[]);
void schedule();

struct Course {
    char name[30];
    char number[10];
    struct Course* next;
};

int menu() {
    int choice;
    printf("What courses would you like to do?\n");
    printf("1. Add Couse\n");
    printf("2. Drop Course\n");
    printf("3. Print Schedule\n");
    printf("4. Exit\n");
    scanf("%d", &choice);
    return choice;
}

struct Course* head = NULL;

void add(char name[], char number[]) {
    int same = 0;

    struct Course *current = head;
    struct Course *last = head;
    while(current != NULL) {
        if(strcmp(current->number, number) == 0) {
            same = 1;
            return;
        }
        last = current;
        current = current->next;
    }

    if(same == 0) {
        struct Course *new;
        new = (struct Course *)malloc(sizeof(struct Course));
        strcpy(new->name, name);
        strcpy(new->number, number);

        if(head == NULL) {
            head = new;
            head->next = NULL;
        } else {
            last->next = new;
            new->next = NULL;
        }
        printf("Added!\n");
    } else {
        printf("Already in course schedule.\n");
    }
    
}

void drop(char number[]) {
    int same = 0;
    struct Course *current = head;
    struct Course *last = head;
    while(current != NULL) {
        if(strcmp(current->number, number) == 0) {
            same = 1;
            if(current == head) {
                head = current->next;
            } else {
                last->next = current->next;
            }
            last = current;
            current = current->next;
        }
        if(same == 0){
            printf("This course is not in your schedule.\n");
        } else {
            printf("Course has been removed.");
        }
    }
}

void schedule(){
    struct Course *current = head;
    int count = 0;
    while(current != NULL) {
        count = count++;

        if(count == 1){
            printf("Course Schedule:\n");
            printf("%d. %s - %s\n", count, current->number, current->name);
            current = current->next;
        } if(count == 0) {
            printf("You aren't currently taking any courses.\n");
        }     
    }
}

int main() {
    int choice = 0;
    char name[30], number[10];

    choice = menu();

    while(choice != 4) {
        switch(choice) {
            case 1:
                printf("What course name would you like to add?\n");
                scanf("%s", name);
                printf("What course number would you like to add?\n");
                scanf("%s", number);
                add(name, number);
                break;
            case 2:
                printf("What course code would you like to drop?\n");
                scanf("%s", number);
                drop(number);
                break;
            case 3:
                schedule();
                break;
            case 4:
                printf("\nDone!");
                break;
            default:
                printf("Choose an option.");               
        }
        choice = menu();
    }

    return 0;
}