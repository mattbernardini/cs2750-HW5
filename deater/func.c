#include "func.h"
// strstr
void searchForSubstring (char *[256] stringArray, char * stringToSearchFor, int numStrings) {
    for (int i = 0; i < numStrings; i++) {
        if (strstr(stringToSearchFor, stringArray[i]) != NULL) {
            printf("%s is a substring of %s\n", stringToSearchFor, stringArray[i]);
        }
    }
}