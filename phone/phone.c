#include "phone_fmt.h"

int main (int argc, char* argv[]) {
    int number[9] = { 0 };
    int counter = 0;
    parsePhoneNumber(argv, number);
    if (counter == 9) {
        printf("(%d%d%d) %d%d%d-%d%d%d%d", number[0], number[1], number[2], number[3], number[4], number[5], number[6], number[7], number[8], number[9]);
    } else {
        printf("ERROR: Not enough digits on input!");
    }
    
    return 0;
}