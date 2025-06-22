#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>


int fibonnaci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonnaci(n - 1) + fibonnaci(n - 2);
    /* 3
    1 + 0 + 1
    */
}

int fact(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}

int sum(int count, ...)
{
    va_list args;
    va_start(args, count);

    int total = 0;
    for (int i = 0; i < count; i++)
    {
        total += va_arg(args, int); // returns the current value and move ahead by 1
    }

    va_end(args);
    return total;
}

int merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;
    int temp[right - left + 1];
    while ((i <= mid) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }

        while (i <= mid)
        {
            temp[k++] = arr[i++];
        }

        while (j <= right)
        {
            temp[k++] = arr[j++];
        }

        for (i = left, k = 0; i <= right; ++i, ++k)
        {
            arr[i] = temp[k];
        }
    }
    {
        /* code */
    }
};
void mergesort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        /* We need to short every parts to parts */
        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);

        /* We need to merge them starting from start(most beginning like if arr is 1 5 4 2 then first it will merge  1 , 5 then next ) */
        merge(arr, left, mid, right);
    }
}

// Utility function to print array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i]; // The element we want to insert
        int j = i - 1;

        // Move elements greater than key one step ahead
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // Shift right
            j--;
        }

        arr[j + 1] = key; // Insert key at correct position
    }
}

int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid; // Found
        else if (arr[mid] < target)
            low = mid + 1; // Go right
        else
            high = mid - 1; // Go left
    }

    return -1; // Not found
}

int main()
{
    // 3 number se minimum
    /* 1 2 3
     */
    /* int i = 4, j = 2, k =3;
    int result = (i < j)? i:j;
    result = (result < k)? result:k;
    printf("%d",result); */

    /* 15 numbers se minimum nikalna hai using array
     1 2 3 4 5 6 7 8 9 .. 13 14 15
     check two numbers and then make the second(i+1) number the minimum one
    */
    /* int arr1[15];
    int count = 5;
    for (size_t i = 0; i < count; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for (size_t i = 0; i < count; i++)
    {
        printf("%d ",arr1[i]);
    }

    //logic to find minimum 1
    for (size_t i = 0; i < (count - 1); i++)
    {
        if (arr1[i+1] > arr1[i])
        {
            arr1[i+1] = arr1[i];
        }

    }
    printf("The minimum is %d",arr1[count]); */

    /* Ascending order
    2 3 1 5 6
    1 2 3 5 6
    hamko sabse pele minimum element ka index dund na hoga
    then usko start se add karenge


    for i = 0
    for j = i

    for i = 0
    j= 0 => min of i and i+1
    j= 1
    j= 3
    ...
    well find the minimum number
    and replace that minimum number index with index i digit at that time

    basically we can do it using three ways
    1 is using inside functions
    2 using selection short algo
    3 using bubble short algo
    */
    /*
        int arr[] = {5,3,2,4,1};
        int count = 5;
        for (size_t i = 0; i < (count-1); i++)
        {
            int min = i;
            for (size_t j = i + 1; j < count; j++)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }
            }
            if (min != i)
            {
                int temp = arr[min];
                arr[min] = arr[i];
                arr[i] = temp;
            }
        }

        for (size_t i = 0; i < count; i++)
        {
            printf("%d ", arr[i]);
        } */

    /* To short in descending order (Almost same as ascending order) */
    /*
        int arr[] = {5, 3, 2, 4, 1};
        int count = 5;
        for (size_t i = 0; i < (count - 1); i++)
        {
            int min = i;
            for (size_t j = i + 1; j < count; j++)
            {
                if (arr[j] >arr[min])
                {
                    min = j;
                }
            }
            if (min != i)
            {
                int temp = arr[min];
                arr[min] = arr[i];
                arr[i] = temp;
            }
        }

        for (size_t i = 0; i < count; i++)
        {
            printf("%d ", arr[i]);
        } */

    /* Fibonnaci series
    0 1 1 2 3 5 8 13 ...
    0 1 2 3 4 5 6 7 ....

    */

    /* int n = fibonnaci(4);
    printf("%d",n); */

    /* int n = 10; // Print first 10 Fibonacci numbers

    int a = 0, b = 1;
    printf("%d %d ", a, b);

    for (int i = 2; i < n; i++)
    {
        int next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    } */
    /*
    int m = fact(4);
    printf("%d",m); */

    /* #include <stdio.h>

    int main() {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);

        unsigned long long factorial = 1;  // use long long for large results

        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }

        printf("Factorial of %d = %llu\n", n, factorial);

        return 0;
    } */

    /* Addion of 10 numbers using vardiac functions */
    /*  int result = sum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
     printf("The sum is: %d\n", result); */
    /*
        int n = 10;
        int sum = (n * (n + 1)) / 2; */

    /* Atm Withdrawal program
        basically there will be given balance and we need to make that user can easily withdraw the amount
    */

    /*     float balance = 10000.00; // Initial account balance
        float withdrawalAmount;

        printf("Welcome to the ATM!\n");
        printf("Your current balance is: ₹%.2f\n", balance);
        printf("Enter the amount you want to withdraw: ₹");
        scanf("%f", &withdrawalAmount);

        // Check if the withdrawal amount is valid
        if (withdrawalAmount <= 0)
        {
            printf("Invalid amount. Please enter a positive value.\n");
        }
        else if (withdrawalAmount > balance)
        {
            printf("Insufficient balance! Your current balance is ₹%.2f\n", balance);
        }
        else
        {
            balance -= withdrawalAmount; // Deduct the amount from the balance
            printf("Transaction successful! You have withdrawn ₹%.2f\n", withdrawalAmount);
            printf("Your updated balance is ₹%.2f\n", balance);
        }

        printf("Thank you for using the ATM. Have a great day!\n"); */

    /* File I\O */

    /* 1) Write data to a file */

    /* FILE* file = fopen("Myworld.txt","a");

    if (file == NULL)
    {
        printf("Failed to open file\n");
        return 1;
    }

    // fprintf(file,"Hello there, this is vansh from smowcode \n");
    // fprintf(file,"Just wanted to say hello \n");


 fprintf(file,"\n This is the new line and now I'm appending this to and existing file \n ");
    fclose(file);
    printf("File closed sucessfully !");
     */

    /* 2. Reading the file data */
    /* FILE *file = fopen("Myworld.txt", "r");
    if (file == NULL)
    {
        printf("The file did not open\n");
        return 1;
    }

    char line[100];
    while(fgets(line,sizeof(line),file)){
        printf("%s",line);
    };
    fclose(file);
 */
    // printf("\n %s hello", line);

    /*
    left(beginning element), mid, right(right most element) are the index of that position of that element
    so the total size of array is [right -left +1]

    lets say 1 2 5 4 3
    1 2 5     4 3
    merge & sort
    1 2 5     3 4
    again
    1 2 3 4 5

    let say 5 4 8 9 3 1 2
    5 4 8 9             3 1 2
    [5 , 4] [8, 9]      [3,1,2]
    merge and short
    [4,5] [8,9]         [1,2,3]
    [4,5,8,9]           [1,2,3]
    [1,2,3,4,5,8,9]
    ------

    5 4 6 3 1
    first= 0 ,
    mid=


    *//* 
    int arr[] = {5, 2, 9, 1, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting: ");
    printArray(arr, size);

    mergesort(arr, 0, size - 1);

    printf("After sorting:  ");
    printArray(arr, size); */

    /* int arr[] = {5, 3, 4, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting: ");
    printArray(arr, size);

    insertionSort(arr, size);

    printf("After sorting:  ");
    printArray(arr, size); */

    /* To make right angle triangle using * pattern
    i = 1;
    *       1
    **      2
    ***     3
    ****    4
    */

    /* int j = 1;
    int n,i = 0;
    scanf("%d",&n);
    for (size_t k = 0; k < n; k++)
    {
        while (i < j)
        {
            printf("*");
            i++;
        }
        printf("\n");
        i = 0;
        j++;
    } */

    /* Linked list  */
    /*
    #include <stdio.h>
#include <stdlib.h>

// we need to create struct node then func which inserts node (adds and linked by its previous node) and last prints it

struct node
{
int data;
struct node* next;
};

void insertend (struct node** head, int value)
{
struct node* newNode = (struct node*)malloc(sizeof(struct node));
/*if(newNode == NULL)
{
    printf("Memory allocation failed! \n");
    return ;
} */
/*
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) // empty list
    {
        *head = newNode;

        return;
    }
    else // we need to go at end node
    {

        struct node *current = *head;
        while (current->next != NULL) // find the struct where the that struct is pointing to null
        {
            current = current->next; // will point to next pointer
        }
        current->next = newNode;
    }
}

void printList(struct node *head)
{
    struct node *current = head;
    while (current != NULL)
    {
        printf("%d →  =>", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
int main()
{
    struct node *luffy = NULL; // start with null ptr
    insertend(&luffy, 45);
    insertend(&luffy, 60);

    printf("Linked list: ");
    printList(luffy);
    return 0;
}

        */


        /* Binary search */


    

    
        int arr[] = {2, 4, 6, 8, 10, 12};
        int size = sizeof(arr) / sizeof(arr[0]);
        int target = 10;

        int index = binarySearch(arr, size, target);

        if (index != -1)
            printf("Element %d found at index %d.\n", target, index);
        else
            printf("Element %d not found in array.\n", target);

        

    return 0;
}
