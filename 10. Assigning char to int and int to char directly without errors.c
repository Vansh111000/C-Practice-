#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>


/*
1)char to int
2)int to char
*/
//1
/*
int main()
{
    char c = 'A';   // ASCII 65
    int x = c;

    printf("%d\n", x);  // Output: 65
    return 0;
}
*/

//2 int to char

//There are 2 ways
//1] if you u are using raw inputs so you can use this function to convert int to char, use it in condintion
/*
bool safeIntToByte(int input, uint8_t *outByte) {
    if (input < 0 || input > 255) return false;
    *outByte = (uint8_t)input;
    return true;
}
*/

//2]
bool safeIntToChar(int input, char *outChar) {
    if (input < 0 || input > 127) {
        // Out of valid ASCII range
        return false;
    }
    *outChar = (char)input;
    return true;
}

int main() {
    char result;
    int value = 65;  // A

    if (safeIntToChar(value, &result)) {
        printf("Converted char: %c\n", result);
    } else {
        printf("Error: Value out of char range!\n");
    }
    return 0;
}


