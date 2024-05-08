#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int menu();
void pick_mon(char pk_name[], int *hp, int *max);
void view_mon(char pk_name[], int hp, int max);
int battle_mon(char pk_name[], int hp);

int menu() {
    int choice;
    printf("Main Menu\n");
    printf("1. Pick a new Pokemon\n");
    printf("2. Battle your pokemon.\n");
    printf("3. Heal your Pokemon.\n");
    printf("4. View Current Pokemon\n");
    printf("5. Exit");
    printf("What is your choice?\n");
    scanf("%d", &choice);
    return choice;
}

void pick_mon(char pk_name[], int *hp, int *max) {
    printf("What pokemon would you like?\n");
    scanf("%s", pk_name);
    printf("What is the max HP of %s?\n", pk_name);
    scanf("%d", max);
    *hp = *max;
    printf("Created!\n\n");
}
void view_mon(char pk_name[], int hp, int max) {
    printf("Your pokemon is:\n");
    if (strcmp(pk_name, "totodile") == 0) {
        printf("Trash\n%d / %d\n", hp, max);
    } else {
        printf("%s\n%d / %d\n", pk_name, hp, max);
    }
    printf("\n");
}

int battle_mon(char pk_name[], int hp){
    printf("Welcome to the pokemon battle sim!\n");
    int max = hp;

    char foe_list[3][25];
    strcpy(foe_list[0], "Cubone");
    strcpy(foe_list[1], "Dragonair");
    strcpy(foe_list[2], "Jolteon");

    char name[25];
    int b_hp, b_max;

    int choice = rand()%3;

    strcpy(name, foe_list[choice]);
    if (strcmp(name, "Cubone") == 0)
        b_hp = 780;
    else if (strcmp(name, "Dragonair") == 0) {
        b_hp = 500;
    }  else {
        b_hp = 300;
    }
    b_max = b_hp;
    printf("A wild %s has appeared\n", name);
    while (hp > 0 && b_hp > 0) {
        printf("Your pokemon:\n");
        view_mon(pk_name, hp, max);
        printf("Wild pokemon:\n");
        view_mon(name, b_hp, b_max);
        int attack_1;
        if (strcmp(pk_name, "totadile") == 0)
            attack_1 = 2;
        else
            attack_1 = rand()% 201 + 25;
        int attack_2 = rand()%250 + 1;
        printf("You did %d damage!\n and %s did %d damage!\n", attack_1, name, attack_2);
        hp -= attack_2;
        b_hp -= attack_1;
    }
    if (hp < 0) {
        printf("You lost!\n\n");
    } else {
        printf("You won!\n");
    }
    return hp;
}

int main() {
    char name[25];
    int hp, max_hp, choice = 0;

    // Seeding our random number generator
    srand(time(0));


    pick_mon(name, &hp, &max_hp);
    choice = menu();

    while (choice != 5) {
        switch (choice) {
            case 1:
                pick_mon(name, &hp, &max_hp);
                break;
            case 2:
                hp = battle_mon(name, hp);
                break;
            case 3:
                hp = max_hp;
                break;
            case 4:
                view_mon(name, hp, max_hp);
                break;
            default:
                printf("Pick a better option!\n\n");
        }
        choice = menu();
    }
    printf("Goodbye\n");




    return 0;
}
