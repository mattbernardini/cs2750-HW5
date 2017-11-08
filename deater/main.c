#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "func.h"

int main (int argc, char* argv[]) {
    int totalIntegers = 0, arrayCounter = 0;
    char stringArray [argc][256];
    for (int i = 1; i < argc; i++) {
        // Handle if the argument is a integer
        if (atoi(argv[i]) != 0) {
            int tempInt = atoi(argv[i]);
            totalIntegers += tempInt;
        } else {
            // We have characters
        }
    }
    printf("Total integers: %d\n", totalIntegers);
    return 0;
}