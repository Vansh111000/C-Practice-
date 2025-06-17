#include<stdio.h>
/*There will be no swapping
you can refer at : https://www.geeksforgeeks.org/c/swap-strings-in-c/
*/
/*
void swap(char *str1, char *str2)
{
char *temp = str1;
str1 = str2;
str2 = temp;
}

int main()
{
char *str1 = "geeks";
char *str2 = "forgeeks";
swap(str1, str2);
printf("str1 is %s, str2 is %s", str1, str2);
getchar();
return 0;
}
*/

//so instead of doing this, we can point to this pointer.
/*
The Gpt reason:
Imagine you have two signs, Sign1 and Sign2, and each sign has a name written on it. Instead of moving the names themselves, you just swap the signs. Now, Sign1 shows the name that was on Sign2, and vice versa. This is similar to swapping pointers in C.
When dealing with character pointers (instead of arrays), str1 and str2 don’t store the actual string data—rather, they store the address where that data is kept. Instead of swapping the actual string, you simply swap the addresses they hold.
Now, about passing a pointer to a pointer:
Think of a GPS system. If you give someone your home address, they can drive to your house. But what if you want to change your home location? Instead of just giving your home address, you give them the address of a map that contains your home location. If they update the map, your location updates everywhere.
Similarly, when you want a function to modify a pointer (like changing where it points), you must pass a pointer to that pointer, so the function can update it properly.

*/

//the solution code for this :)


/* Swaps strings by swapping pointers */
void swap1(char **str1_ptr, char **str2_ptr)
{
char *temp = *str1_ptr;
*str1_ptr = *str2_ptr;
*str2_ptr = temp;
}

int main()
{
char *str1 = "geeks";
char *str2 = "forgeeks";
swap1(&str1, &str2);
printf("str1 is %s, str2 is %s", str1, str2);
getchar();
return 0;
}
