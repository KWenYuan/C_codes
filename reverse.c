#include <stdio.h>

// This code is to reverse an array without putting the values into a temporary buffer

// Defining the size of the array
#define size 10

// Function to swap 2 of the values in the array
void swap(int *start, int *end);

// Function to reverse the array
void reverseArray(int *array, int arraySize);

int main(void) {
    // Declaring an array here and inputting values in it
    int a[size];
    printf("Before reversing the array\n");
    for (int i = 0; i < size; i++) {
        a[i] = i * 10;
        // Print out what the array contains before reversing
        printf("a[%d] is %d\n", i, a[i]);
    }

    // function to reverse the array
    reverseArray(a, size);

    // Print out what the array contains after reversing
    printf("After reversing the array\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] is %d\n", i, a[i]);
    }    
}

// Defining the swap function to use in reverseArray
void swap(int *start, int *end) {
    int tmp = *start;
    *start = *end;
    *end = tmp;
}

// Function to reverse the array
void reverseArray(int *array, int arraySize) {
    for (int *i = array, *j = array + arraySize - 1; i < j; i++, j--) {
        swap(i, j);
    }
}