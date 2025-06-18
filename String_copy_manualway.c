#include <stdio.h>
#include <string.h>


/* String Copy We will use manual way as it is more good
has con that we can't add the copy like append it but nvm we have strcat for that
*/

void stringCopy(char *dest, const char *src)
{
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  // Null-terminate the destination string
}

int main()
{
    char msg1[] = "ESP-IDF";
    char msg2[50] = "Hello ";
    stringCopy(msg2, msg1);
    printf("%s",msg2);

    return 0;
}
