#include "func.h"
// strstr
void searchForSubstring (int numStrings, char* stringArray[numStrings], char * stringToSearchFor) {
    for (int i = 1; i < (numStrings + 1); i++) {
        if (strstr(stringToSearchFor, stringArray[i]) != NULL) {
            printf("%s is a substring of %s\n", stringArray[i], stringToSearchFor);
        }
    }
}