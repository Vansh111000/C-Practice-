#include <stdio.h>

int main() {
    int a = 255; // 00000010
    int b = 3;
    // int result = a << 1;//00000100 basically multiplies by 2
    int result = a >> 1;//00000100 basically divides by 2
    printf("%d", result);
    // 255 * 2 = 510
    return 0;
}
