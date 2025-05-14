#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[20];
    int I_D;
    int age;
    char course[20];
    char enrollment_status[20];
};

void input()
{
    struct student n1;
    FILE *ptr = fopen("student.txt", "a");
    if (ptr == NULL)
    {
        printf("Error opening file\n");
        return;
    }
    getchar();
    printf("ENTER THE NAME: ");
    fgets(n1.name, sizeof(n1.name), stdin);
    n1.name[strcspn(n1.name, "\n")] = 0;

    printf("ENTER THE ID: ");
    scanf("%d", &n1.I_D);

    printf("ENTER THE AGE: ");
    scanf("%d", &n1.age);
    getchar();

    printf("ENTER THE COURSE: ");
    fgets(n1.course, sizeof(n1.course), stdin);
    n1.course[strcspn(n1.course, "\n")] = 0;

    printf("ENTER THE ENROLLMENT STATUS: ");
    fgets(n1.enrollment_status, sizeof(n1.enrollment_status), stdin);
    n1.enrollment_status[strcspn(n1.enrollment_status, "\n")] = 0;

    fprintf(ptr, "%d %s %d %s %s\n", n1.I_D, n1.name, n1.age, n1.course, n1.enrollment_status);
    fclose(ptr);
    printf("Student Record Added Successfully\n");
}

void display()
{
    FILE *ptr = fopen("student.txt", "r");
    if (ptr == NULL)
    {
        printf("No Student Records Found\n");
        return;
    }
    char list[100];
    printf("ID   Name       Age  Course  Enrollment Status\n");
    printf("................................................\n");
    while (fgets(list, sizeof(list), ptr))
    {
        printf("%s", list);
    }
    fclose(ptr);
}

void search()
{
    FILE *fptr = fopen("student.txt", "r");
    if (fptr == NULL)
    {
        printf("No Student Added\n");
        return;
    }
    int id, found = 0;
    printf("ENTER YOUR ID: ");
    scanf("%d", &id);
    struct student n1;
    while (fscanf(fptr, "%d %s %d %s %s\n", &n1.I_D, n1.name, &n1.age, n1.course, n1.enrollment_status) != EOF)
    {
        if (id == n1.I_D)
        {
            printf("STUDENT DETAILS:\n");
            printf("NAME: %s\n", n1.name);
            printf("ID: %d\n", n1.I_D);
            printf("AGE: %d\n", n1.age);
            printf("COURSE: %s\n", n1.course);
            printf("ENROLLMENT STATUS: %s\n", n1.enrollment_status);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("No Student Found with ID %d\n", id);
    }
    fclose(fptr);
}

void update()
{
    FILE *fptr = fopen("student.txt", "r");
    if (fptr == NULL)
    {
        printf("No student records found to update.\n");
        return;
    }
    int count = 0;
    struct student str[100];
    while (fscanf(fptr, "%d %s %d %s %s\n", &str[count].I_D, str[count].name, &str[count].age, str[count].course, str[count].enrollment_status) != EOF)
    {
        count++;
    }
    fclose(fptr);

    int id, found = 0;
    printf("Enter the ID of the student to update: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < count; i++)
    {
        if (str[i].I_D == id)
        {
            found = 1;
            printf("Updating details for ID %d\n", id);

            printf("ENTER THE NEW NAME: ");
            fgets(str[i].name, sizeof(str[i].name), stdin);
            str[i].name[strcspn(str[i].name, "\n")] = 0;

            printf("ENTER THE NEW AGE: ");
            scanf("%d", &str[i].age);
            getchar();

            printf("ENTER THE NEW COURSE: ");
            fgets(str[i].course, sizeof(str[i].course), stdin);
            str[i].course[strcspn(str[i].course, "\n")] = 0;

            printf("ENTER THE NEW ENROLLMENT STATUS: ");
            fgets(str[i].enrollment_status, sizeof(str[i].enrollment_status), stdin);
            str[i].enrollment_status[strcspn(str[i].enrollment_status, "\n")] = 0;
            break;
        }
    }
    if (!found)
    {
        printf("Student with ID %d not found.\n", id);
        return;
    }

    FILE *write = fopen("student.txt", "w");
    for (int i = 0; i < count; i++)
    {
        fprintf(write, "%d %s %d %s %s\n", str[i].I_D, str[i].name, str[i].age, str[i].course, str[i].enrollment_status);
    }
    fclose(write);
    printf("Student record updated successfully.\n");
}

void delete()
{
    FILE *ptr = fopen("student.txt", "r");
    if (ptr == NULL)
    {
        printf("NO STUDENT FOUND\n");
        return;
    }
    struct student list[100];
    int count = 0, found = 0;
    while (fscanf(ptr, "%d %s %d %s %s\n", &list[count].I_D, list[count].name, &list[count].age, list[count].course, list[count].enrollment_status) != EOF)
    {
        count++;
    }
    fclose(ptr);
    int id;
    printf("ENTER THE STUDENT ID: ");
    scanf("%d", &id);

    FILE *delate1 = fopen("student.txt", "w");
    for (int i = 0; i < count; i++)
    {
        if (id == list[i].I_D)
        {
            found = 1;
            continue;
        }
        fprintf(delate1, "%d %s %d %s %s\n", list[i].I_D, list[i].name, list[i].age, list[i].course, list[i].enrollment_status);
    }
    fclose(delate1);

    if (!found)
    {
        printf("NO STUDENT WITH ID %d FOUND\n", id);
    }
    else
    {
        printf("Student record deleted successfully.\n");
    }
}

void enrollment_status()
{
    FILE *ptr = fopen("student.txt", "r");
    if (ptr == NULL)
    {
        printf("No student records found.\n");
        return;
    }
    int count = 0;
    struct student students[100];
    while (fscanf(ptr, "%d %s %d %s %s\n", &students[count].I_D, students[count].name, &students[count].age, students[count].course, students[count].enrollment_status) != EOF)
    {
        count++;
    }
    fclose(ptr);

    int id, found = 0;
    printf("ENTER THE ID OF THE STUDENT: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < count; i++)
    {
        if (id == students[i].I_D)
        {
            found = 1;
            printf("Enter the new enrollment status: ");
            fgets(students[i].enrollment_status, sizeof(students[i].enrollment_status), stdin);
            students[i].enrollment_status[strcspn(students[i].enrollment_status, "\n")] = 0;
            break;
        }
    }

    if (!found)
    {
        printf("No student found with ID %d.\n", id);
        return;
    }

    FILE *fptr = fopen("student.txt", "w");
    if (fptr == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }
    for (int i = 0; i < count; i++)
    {
        fprintf(fptr, "%d %s %d %s %s\n", students[i].I_D, students[i].name, students[i].age, students[i].course, students[i].enrollment_status);
    }
    fclose(fptr);

    printf("Enrollment status updated successfully.\n");
}

int main()
{
    int choice = 0;
    while (choice != 7)
    {
        printf("***************STUDENT MANAGEMENT SYSTEM*******************\n");
        printf("\n1. Add New Student\n");
        printf("2. View All Student List\n");
        printf("3. Search Student\n");
        printf("4. Update Student Details\n");
        printf("5. Delete Student\n");
        printf("6. Mark Enrollment Status\n");
        printf("7. Exit\n");
        printf("**********************************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            input();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            delete ();
            break;
        case 6:
            enrollment_status();
            break;
        case 7:
            printf("Exiting...\n");
            break;
        default:
            printf("Enter a valid option.\n");
        }
    }
    return 0;
}

// #include<stdio.h>
// int main(){
//     FILE *ptr;
//     ptr = fopen("notes.txt","w");
//     char str[20];
//     gets(str);
//     fputs(str,ptr);
//     fclose(ptr);
//     return 0;
// }