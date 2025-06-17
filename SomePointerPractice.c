/*
****** Content *******
    1) Double Pointers
    2) Swap function we can use to swap 2 vars
    3) pointer function
 */

/* #include<stdio.h>
void mystery(int **ptra, int **ptrb)
{
   int *temp;
   temp = *ptrb;
   *ptrb = *ptra;
   *ptra = temp;
}
int main()
{
    int a=2016, b=0, c=4, d=42;
    int* arr = &a;
    int* brr = &b;
    int* crr = &c;
    int* drr = &d;
    mystery(&arr, &brr);
    if (a < c)
       mystery(&crr, &arr);
    mystery(&arr, &drr);
    printf("%d", a);
    return 0;
}

*/

/*

#include <stdio.h>

void swap(int *ptra, int *ptrb) {
    int temp = *ptra;  // Store the value of a
    *ptra = *ptrb;     // Assign b's value to a
    *ptrb = temp;      // Assign temp (original a) to b
}

int main() {
    int a = 5, b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b); // Pass addresses of a and b

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}

*/

/*
#include <stdio.h>
int main()
{
    int array[5][5];
    printf("%d",( (array == *array) && (*array == array[0]) ));
    return 0;
}

*/

//We can use function pointers like this:
//refrence: https://www.geeksforgeeks.org/c/how-to-declare-a-pointer-to-a-function/
#include <stdio.h>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two integers
int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b){
    return a*b;
}

int calc(int a, int b, int (*op)(int, int)) {
  	return op(a, b);
}

int main() {

    // Using the add function
    printf("%d\n", calc(5, 3, add));

    // Using the subtract function
    printf("%d\n", calc(5, 3, sub));

    printf("%d", calc(5,3,mul));

    return 0;
}
