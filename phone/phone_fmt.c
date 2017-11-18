#include "phone_fmt.h"

void parsePhoneNumber (char * argv[], int number[]) {
    int counter = 0;
    for (int i = 0; argv[1][i] != '\0'; i++) {
        if (isdigit(argv[1][i]) != 0 && counter < 10) {
            number[counter++] = argv[1][i] - '0';
        }
    }
}