#include "phone_fmt.h"

int main (int argc, char* argv[]) {
    int number[10] = { 0 };
    for (int i = 0; argv[1][i] != '\0'; i++) {
        printf("%c\n", argv[1][i]);
    }
    return 0;
}