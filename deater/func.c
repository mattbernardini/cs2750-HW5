#include "func.h"
// strstr
void searchForSubstring (int numStrings, char* stringArray[numStrings], char * stringToSearchFor) {
    for (int i = 0; i < numStrings; i++) {
        if (strstr(stringToSearchFor, stringArray[i]) != NULL) {
            printf("%s is a substring of %s\n", stringArray[i], stringToSearchFor);
        }
    }
}