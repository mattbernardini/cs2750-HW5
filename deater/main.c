#include "func.h"

int main (int argc, char* argv[]) {
    int totalIntegers = 0, arrayCounter = 0;
    // To store the words we get in command line, initialize to null terminator
    char stringArray [argc][256] = (char*)malloc(argc * 256 * sizeof(char));

    for (int i = 1; i < argc; i++) {
        // Handle if the argument is a integer
        if (atoi(argv[i]) != 0) {
            int tempInt = atoi(argv[i]);
            totalIntegers += tempInt;
        } else {
            // We have characters
            // Copy string into our search array
            strncpy(stringArray[arrayCounter], argv[i], 256);
            searchForSubstring(stringArray, argv[i], arrayCounter);
            arrayCounter++;
        }
    }
    printf("Total integers: %d\n", totalIntegers);
    return 0;
}