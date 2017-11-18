#include "phone_fmt.h"

int main (int argc, char* argv[]) {
    // Allocate memory for phone number
    int number[9] = { 0 };
    // Parse phone number
    int counter = parsePhoneNumber(argv, number);
    // print phone number
    printPhoneNumber(counter, number);
    return 0;
}