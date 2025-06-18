/*
********Content*********
1) String to int conversion
*/


/*
src : The input string
*end string pointer: consist of string starting from when the int get over
example : 123abc
*end => abc => integers end at 3 so it will consist digits after 3
Also we need to provide base 10

the whole strtol returns  numeric value
 */

 //also we can use atoi but handling it would be difficult
 /*
#include <stdio.h>
#include <stdlib.h>

int main() {
    char src[] = "456abc54";
    char *end;
    long num = strtol(src, &end, 10);  // base 10
 printf("The number is: %s\n", end);
    if (*end != '\0') {
        printf("Invalid number!\n");
    } else {
        printf("The number is: %ld\n", num);
    }

    return 0;
}

*/

/*
let’s now flip the coin and talk about how to convert an int to a string in C, which is super useful when you're generating messages, logging, or preparing data to send over UART, network, etc.
*/
// int to string conversion

//there are two ways
// by using snprintf (bit heavy )

/*
#include <stdio.h>

int main() {
    int num = 456;
    char des[10];
    snprintf(des, sizeof(des), "%d", num);  // prevents overflow
    printf("String: %s\n", des);
    return 0;
}
*/

// 2) Manual way (light weighted but long code)
/*
#include <stdio.h>

void intToStr(int num, char* str) {
    int i = 0;
    int isNegative = 0;

    if (num == 0) {
        str[i++] = '0';
        str[i] = '\0';
        return;
    }

    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    // Extract digits in reverse
    while (num > 0) {
        str[i++] = (num % 10) + '0';  // convert digit to char
        num /= 10;
    }

    if (isNegative)
        str[i++] = '-';

    str[i] = '\0';

    // Now reverse the string
    for (int j = 0; j < i / 2; j++) {
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }
}

int main() {
    char buffer[20];
    intToStr(-789, buffer);
    printf("Manual string: %s\n", buffer);
    return 0;
}
*/


