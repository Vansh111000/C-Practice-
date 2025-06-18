#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1 we are creating dynamic array which will store no of strings dynamically
*/

/*
int main()
{
    int n,size = 50;
    char* arr = NULL;
    char** arr2 = &arr;
    printf("Enter the No of strings You want to put (You can resize the array after this too :) ) \n");
    scanf("%d",&n);
    arr = (char *)malloc(size*sizeof(char));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter the string value: ");
    scanf("%s",arr);


    //printf("The string is %s",arr);
    //printf("The string is %s",*arr2);

    free(arr);
    arr = NULL;
    return 0;
}

*/


int main() {
    char **arr = NULL; // Pointer to array of strings
    int size = 0;
    char input[50];

    printf("Keep entering strings (type 'done' to stop):\n");

    while (1) {
        printf("Enter string: ");
        scanf("%49s", input); // Avoids buffer overflow

        if (strcmp(input, "done") == 0) break;

        // Step 1: Resize memory for storing one more string
        char **temp = (char **)realloc(arr, (size + 1) * sizeof(char *));
        if (temp == NULL) {
            printf("Memory allocation failed!\n");
            break;
        }
        arr = temp;

        // Step 2: Allocate memory for the new string and store it
        arr[size] = (char *)malloc(strlen(input) + 1);
        if (arr[size] == NULL) {
            printf("Memory allocation failed for string!\n");
            break;
        }
        strcpy(arr[size], input); // Copy user input

        size++; // Increase count
    }

    // Step 3: Print stored strings
    printf("\nStored strings:\n");
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }

    // Step 4: Free allocated memory
    for (int i = 0; i < size; i++) {
        free(arr[i]); // Free each string
    }
    free(arr); // Free the array of pointers

    return 0;
}

