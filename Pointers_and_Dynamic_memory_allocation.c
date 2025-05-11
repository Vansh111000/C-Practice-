/* 
Question:
Design and implement a C program that manages a dynamic student database using pointers and 
dynamic memory allocation. The program should provide the following functionalities: 
1. Add a Student: 
o Prompt the user to enter the details of a new student (Student ID, Name, Age, GPA). 
o Dynamically allocate memory to store the student record. 
o Add the student record to the database. 
2. Display All Students: 
o Display the details of all students currently stored in the database. 
3. Search for a Student by ID: 
o Prompt the user to enter a Student ID.  
o Search the database for the student with the given ID. 
o Display the student's details if found; otherwise, display a "Student not found" 
message. 
4. Update a Student's GPA: 
o Prompt the user to enter a Student ID. 
o Search the database for the student with the given ID. 
o If found, prompt the user to enter the new GPA and update the student's record. 
o If not found, display a "Student not found" message. 
5. Delete a Student: 
o Prompt the user to enter a Student ID. 
o Search the database for the student with the given ID. 
o If found, delete the student's record and deallocate the memory. 
o If not found, display a "Student not found" message. 
6. Exit: 
o Deallocate all dynamically allocated memory before exiting the program. 
o Display a message indicating that the program has exited successfully. 
Requirements: 
● Use pointers to manage the student records. 
● Use dynamic memory allocation (e.g., malloc, calloc, realloc, free) to allocate and 
deallocate memory for student records. 
● Ensure that the program handles memory allocation failures gracefully (e.g., by displaying 
an error message and exiting if memory allocation fails). 
● Implement a menu-driven interface that allows the user to choose between the different 
functionalities. 
● The program should continue running until the user chooses to exit. 

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Structure for students
typedef struct
{
    int id;
    char name[20];
    int age;
    float gpa;
} student;

//name:Vansh s kataria , Roll no :16010124145


void add(student *s)
{
    printf("Enter the student ID: ");
    scanf("%d", &s->id);

    printf("Enter the student name: ");
    getchar();  // clear newline
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0';

    printf("Enter the age: ");
    scanf("%d", &s->age);

    printf("Enter the GPA: ");
    scanf("%f", &s->gpa);

//name:Vansh s kataria , Roll no :16010124145
}

void display(student *s)
{
    printf("\nStudent ID: %d\nName: %s\nAge: %d\nGPA: %.2f\n", s->id, s->name, s->age, s->gpa);
}

void findid(student *s, int count)
{
    int id;
    printf("\nEnter the ID to search for: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (s[i].id == id)
        {
            //Name: Vansh S kataria , Roll no: 16010124145
            printf("Student found!\n");
            display(&s[i]);
            return;
        }
    }

//name:Vansh s kataria , Roll no :16010124145
    printf("No student found with ID %d.\n", id);
}
//update
void update(student *s, int count)
{
    int id;
    printf("Enter the ID of the student to update GPA: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++)
    {
        if (s[i].id == id)
        {
            printf("Student found: %s\n", s[i].name);
            printf("Enter new GPA: ");
            scanf("%f", &s[i].gpa);
            return;
        }
    }

    printf("No student found with ID %d.\n", id);
}

void delete_student(student **s, int *count)
{
    int id;
    printf("\nEnter the ID of the student to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++)
    {
        if ((*s)[i].id == id)
        {
            for (int j = i; j < *count - 1; j++)
            {
                (*s)[j] = (*s)[j + 1];
            }
            (*count)--;

            student *temp = realloc(*s, (*count) * sizeof(student));
            if (temp != NULL || *count == 0)
            {
                *s = temp;
            }
            else
            {
                printf("Memory reallocation failed after deletion.\n");
            }

            printf("Student with ID %d deleted successfully.\n", id);
            return;
        }
    }

    printf("No student found with ID %d.\n", id);
}

int main()
{
    int menu, count = 0;
    student *students = NULL;

    while (1)
    {
        printf("\n===== Student Management Menu =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Update Student GPA\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &menu);

//name:Vansh s kataria , Roll no :16010124145

        switch (menu)
        {
        case 1:
        {
            student *temp = realloc(students, (count + 1) * sizeof(student));
            if (temp == NULL)
            {
                printf("Memory allocation failed!\n");
                free(students);
                return 1;
            }
            students = temp;
            add(&students[count]);
            count++;
            break;
        }
        case 2:
            if (count == 0)
            {
                printf("No students to display.\n");
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    display(&students[i]);
                }
            }
            break;

        case 3:
            findid(students, count);
            break;

        case 4:
            update(students, count);
            break;

        case 5:
            delete_student(&students, &count);
            break;

        case 6:
            printf("Exiting program.\n");
            free(students);
            printf("\nname:Vansh s kataria , Roll no :16010124145");
            return 0;

        default:
            printf("Invalid option. Please choose a valid menu item.\n");
        }
    }
}
