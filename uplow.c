#include <stdio.h>

// This file contains the function to change a string to lowercase or uppercase, with an input of a char const array

// String to change
char const string[] = "abCdEfGHIjKLmnOPqRstuVWxYz123456789";

// Function to change to uppercase
void toUpper(char *dst, char const *src);

// Function to change to lowercase
void toLower(char *dst, char const *src);

int main(void) {
    char buffer[50];
    // Print out the string before any changes
    printf("Before change: %s\n", string);

    // Calling function to change string to uppercase
    toUpper(buffer, string);
    
    // Print out the string after toUpper function is passed
    printf("After to upper: %s\n", buffer);
    
    // Calling function to change string to lowercase
    toLower(buffer, string);
    
    // Print out the string after toLower function is passed    
    printf("After to lower: %s\n", buffer);
}

void toUpper(char *dst, char const *src) {
    int i = 0;
    while (*(src + i) != '\0') {
        if (*(src + i) >= 'a' && *(src + i) <= 'z') {
            *(dst + i) = *(src + i) - 32;
        } else {
        *(dst + i) = *(src + i);
        }
        i++;
    }
}

void toLower(char *dst, char const *src) {
    int i = 0;
    while (*(src + i) != '\0') {
        if (*(src + i) >= 'A' && *(src + i) <= 'Z') {
            *(dst + i) = *(src + i) + 32;
        } else {
        *(dst + i) = *(src + i);
        }
        i++;
    }
}
