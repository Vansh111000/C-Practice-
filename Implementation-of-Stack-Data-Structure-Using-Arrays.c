/* 
Problem Statements:
Develop a program to implement a stack data structure using arrays. The program should support the following operations:
Push(x): Insert an element x into the stack.
Pop(): Remove and return the top element from the stack.
Peek(): Display the top element without removing it.
isEmpty(): Check whether the stack is empty.
isFull(): Check whether the stack is full.
Display(): Print all elements present in the stack.
Constraints:
The stack should be implemented using a fixed-size array.
The stack follows the Last In, First Out (LIFO) principle.
The program should handle cases of stack overflow (pushing into a full stack) and stack underflow (popping from an empty stack).
Input/Output Format:
Input: The user should be able to select operations and enter values accordingly.
Output: Display the stack status after each operation, including error messages if applicable.
Enter stack size: 5
Choose operation: 1-Push, 2-Pop, 3-Peek, 4-Display, 5-Exit
1
Enter value to push: 10
1
Enter value to push: 20
4
Stack elements: [10, 20]
3
Top element: 20
2
Popped element: 20
4
Stack elements: [10]
5
Exiting program...
*/

#include <stdio.h>
#include <stdlib.h>

int *stack;
int top = -1;
int size;

//Name: Vansh S kataria , Roll no: 16010124145

void push(int value)
{
    if (top == size - 1)
    {
        printf("Stack overflow!\n");
        return;
    }
    stack[++top] = value;
    printf("%d pushed to stack.\n", value);
}

int pop()
{
    if (top == -1)
    {
        printf("Stack underflow!\n");
        return -1;
    }
    return stack[top--]; 
}

int peek()
{
    if (top == -1)
    {
        printf("Stack is empty!\n");
        return -1;
    }
//Name: Vansh S kataria , Roll no: 16010124145
    return stack[top];
}

//
void display()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
        return;
        //Name: Vansh S kataria , Roll no: 16010124145
    }
    printf("Stack: [");
    for (int i = 0; i <= top; i++)
    {
        if (i == top)
        {
            printf("%d",stack[i]);
        }
        else
        {
            printf("%d, ", stack[i]);
        }
    }
    printf("]\n");
}

//Name: Vansh S kataria , Roll no: 16010124145
//main function
int main()
{
    int choice, value;

    printf("Enter stack size: ");
    scanf("%d", &size);

    stack = (int *)malloc(size * sizeof(int));
    if (stack == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    while (1)
    {
        printf("\nChoose operation: 1-Push, 2-Pop, 3-Peek, 4-Display, 5-Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            value = pop();
            if (value != -1)
                printf("Popped element: %d\n", value);
            break;
        case 3:
            value = peek();
            if (value != -1)
                printf("Top element: %d\n", value);
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting program...\n");
            free(stack);
            printf("\nName: Vansh S kataria , Roll no: 16010124145");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
//Name: Vansh S kataria , Roll no: 16010124145
    return 0;
}
