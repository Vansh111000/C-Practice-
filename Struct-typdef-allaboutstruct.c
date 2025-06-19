#include <stdio.h>
#include <string.h>

/*
typedef struct {
    int a;
    float marks;
    char name[20];
} Student;


struct Person {
    int age;
    char name[50];
};


int main() {
    Student s1;
    struct Person p1;

    strcpy(s1.name, "Vansh");
    s1.a = 30;
    s1.marks = 96.42;

    printf("Student Name: %.2f\n", s1.marks);
    return 0;
}

*/

/* using Pointers to struct */

/*
    ptr => s1
    ptr is pointing to the struct s1
    we can access the members of s1 using ptr->member_name
*/
/*
typedef struct {
    int a;
    float marks;
    char name[20];
} Student;

int main() {
    Student s1;
    Student *ptr = &s1;   // basically its a pointer which points to the struct s1
    strcpy(s1.name, "Vansh");
    s1.a = 30;
    s1.marks = 96.42;

    ptr->marks = 83;
    printf("Student Name: %.2f\n", ptr->marks);
    return 0;
}

*/

// Nested Structs
/*
typedef struct
{
    int day, month, year;
} Date;

typedef struct
{
    char name[20];
    Date dob;
} Student;

struct moshimosh {
    int daijobo;
    float lol;
};

typedef struct
{
    int hello;
    struct moshimosh n;
} koro;


int main()
{
    Student s;
    s.dob.day = 1;
    koro k;
    k.n.daijobo = 3;
    printf("%d", k.n.daijobo);
    return 0;
}
//Structs can contain other structs — this is very common in hardware drivers and configs.
 */

// struct of arrays
/*
struct Person
{
    char name[20];
    int age;
    float height;
};

int main()
{
    struct Person people[5];
    people[0].age = 23;
    // scanf("%d", people[0].age);
    printf("%d\n",people[0].age);
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d", &people[i].age);
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ",people[i].age);
    }
    return 0;
}

*/

//Passing struct as parameter
typedef struct 
{
    char name[20];
    int age;
    float height;
} Person;

void updatePerson(Person *p); // Avoid passing large structs by value to save memory and avoid stack copying.

void printPerson(Person p);
