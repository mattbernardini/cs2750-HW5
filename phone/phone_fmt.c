#include "phone_fmt.h"
int parsePhoneNumber (char * argv[], int number[]) {
    int counter = 0;
    for (int i = 0; argv[1][i] != '\0'; i++) {
        if (isdigit(argv[1][i]) != 0 && counter < 10) {
            number[counter++] = argv[1][i] - '0';
        }
    }
    return counter;
}
void printPhoneNumber (int counter, int number[]) {
    if (counter == 9) {
        printf("(%d%d%d) %d%d%d-%d%d%d%d\n", number[0], number[1], number[2], number[3], number[4], number[5], number[6], number[7], number[8], number[9]);
    } else {
        printf("ERROR: Not enough digits on input!\n");
    }
}