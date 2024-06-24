#include <stdio.h>

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define RESET "\x1B[0m"

int main() {
    int number = -42;
    
    // Printing error message in red
    printf(RED "Error: Negative number encountered: %d\n" RESET, number);

    // Printing success message in green
    printf(GREEN "Positive number: %d\n" RESET, abs(number));
    
    return 0;
}