#include <stdio.h>

int main() {
    #define VALUE 2

    // Check if VALUE is greater than 3
    #if VALUE > 3
        printf("Value is greater than 3\n");

    // Check if VALUE is 3
    #elif VALUE == 3
        printf("Value is 3");

    // If neither conditions are true, this
    // block will execute
    #else
        printf("Value is less than or equal to 2");
    #endif

    return 0;
}


//https://www.geeksforgeeks.org/cpp-preprocessor-directives-set-2/
