#include "func.h"
// strstr
void searchForSubstring (int numStrings, int argc, char** stringArray, char * stringToSearchFor) {
    for (int i = 0; i < numStrings; i++) {
        if (strstr(stringToSearchFor, &stringArray[i]) != NULL) {
            printf("%s is a substring of %s\n", stringToSearchFor, stringArray[i]);
        }
    }
}