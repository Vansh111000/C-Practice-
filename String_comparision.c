#include <stdio.h>
#include <string.h>


/* String comparision by using strcmp which returns  if 0 when string is equal 
*/
int main() {
    char str1[] = "hello";
    char str2[] = "hello";

    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}
