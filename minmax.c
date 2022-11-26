#include <stdio.h>

// This file contains the function to find the min and max value in an array

// Defining the size of the array
#define size 10

// Given an array of 'random' values
int a[10] = {100, 123, 13, 89, 35, 43, 23, 77, 29, 59};

// Function to find the max value in the array
int max(int *start, int *end);

// Function to find the min value in the array
int min(int *start, int *end);

int main(void) {
    
    // Call function to find the min and max value
    int maxValue = max(a, a + size);
    int minValue = min(a, a + size);

    // Print array in order
    for (int i = 0; i < size; i++) {
        printf("a[%d] is %d\n", i, a[i]);
    }
    printf("max value is %d\n", maxValue);
    printf("max value is %d\n", minValue);
}

// Defining the max function
int max(int *start, int *end) {
    int maxValue = *start;
    while (start < end) {
        // Using the if statement
        if (*start > maxValue) {
            maxValue = *start;
        }
        start++;
    }
    return maxValue;
}

// Defining the min function
int min(int *start, int *end) {
    int minValue = *start;
    while (start < end) {
        // Using the if statement but compact version
        minValue = minValue < *start ? minValue : *start;
        start++;
    }
    return minValue;
}