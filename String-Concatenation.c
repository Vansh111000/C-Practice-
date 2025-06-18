/*
********Content*********
1) String concatenation
*/

#include <stdio.h>
#include <string.h>

int main() {
    char dest[] = "Moshi mosh ";
    char source[] = "Daijobo";

    // Concatenate str2 to str1
    strcat(dest, source);

    printf("%s\n", dest);
    return 0;
}
