#include "phone_fmt.h"

int main (int argc, char* argv[]) {
    int number[9] = { 0 };
    int counter = 0;
    for (int i = 0; argv[1][i] != '\0'; i++) {
        if (atoi(argv[1][i]) != 0) {
            printf("%c\n", argv[1][i]);
        }
    }
    return 0;
}