#include "func.h"

int main (int argc, char* argv[]) {
    int totalIntegers = 0, arrayCounter = 0;
    // To store the words we get in command line, initialize to null terminator
    char stringArray [argc][256];
    memset(stringArray, '\0', sizeof stringArray);

    for (int i = 1; i < argc; i++) {
        // Handle if the argument is a integer
        if (atoi(argv[i]) != 0) {
            int tempInt = atoi(argv[i]);
            totalIntegers += tempInt;
        } else {
            // We have characters
            // Copy string into our search array
            for (int j = 0; j < arrayCounter; j++) {
                if (strstr(argv[i], stringArray[j]) != NULL) {
                    printf("%s is a substring of %s\n", stringArray[j], argv[i]);
                }
            }
            strncpy(stringArray[arrayCounter++], argv[i], 256);
            // searchForSubstring(arrayCounter, argc, stringArray, argv[i]);
        }
    }
    printf("Total integers: %d\n", totalIntegers);
    return 0;
}