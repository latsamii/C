/*
Latsami Luanglaj
A7: Pointers
COP 3223
03.30.24
*/

#include <stdio.h>

// Function that swaps value that a and b are pointing to
void F1(int *a, int *b) {
    int value = *a;
    *a = *b;
    *b = value;
}

// Function takes in arr and size, and iterates through array and checks if each value is less than 10 or greater than 20
// Returns the number of times value is changed
int F2(int arr[], int size) {
    int change = 0;
    for(int i = 0;  i < size; i++) {
        if(arr[i] < 10) {
            arr[i] = 10;
            change += 1;
        } else if(arr[i] > 20) {
            arr[i] = 20;
            change += 1;
        }
    }
    return change;
}

int main() {

    int a = 2, b = 3;
    printf("%d %d\n", a, b);

    F1(&a, &b);
    printf("%d %d\n", a, b);

    int arr[] = {3, 5, 10, 15, 35, 17, 2};
    int size = 7;
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    int changes = F2(arr, size);
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n%d", changes);

    return 0;
}

