#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct student
{
    char first_name[20];
    char last_name[20];
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

    printf("ENTER THE FIRST NAME: ");
    fgets(n1.first_name, sizeof(n1.first_name), stdin);
    n1.first_name[strcspn(n1.first_name, "\n")] = 0;

    printf("ENTER THE LAST NAME: ");
    fgets(n1.last_name, sizeof(n1.last_name), stdin);
    n1.last_name[strcspn(n1.last_name, "\n")] = 0;

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

    fprintf(ptr, "%d %s %s %d %s %s\n", n1.I_D, n1.first_name, n1.last_name, n1.age, n1.course, n1.enrollment_status);
    fclose(ptr);
    printf("STUDENT RECORD ADDED SUCCESFULLY\n");
    printf("**************************************************************************\n");
}

void display()
{
    FILE *ptr = fopen("student.txt", "r");
    if (ptr == NULL)
    {
        printf("No Student Records Found\n");
        return;
    }
    printf("\n**************************************************************************\n");
    printf("| ID    |  Name               | Age   | Course       | Enrollment Status |\n");
    printf("..........................................................................\n");
    struct student n1;
    while (fscanf(ptr, "%d %s %s %d %s %s\n", &n1.I_D, n1.first_name, n1.last_name, &n1.age, n1.course, n1.enrollment_status) != EOF)
    {
        int f_name_len = strlen(n1.first_name);
        printf("| %-5d | %-*s %-*s | %-5d | %-12s | %-15s\n", n1.I_D, 1, n1.first_name, 18 - f_name_len, n1.last_name, n1.age, n1.course, n1.enrollment_status);
    }
    printf("**************************************************************************\n");
    fclose(ptr);
}

void search()
{
    FILE *fptr = fopen("student.txt", "r");
    if (fptr == NULL)
    {
        printf("-------------------------ERROR IN OPENING THE FILE------------------------\n");
        return;
    }
    int id, found = 0;
    printf("ENTER YOUR ID: ");
    scanf("%d", &id);
    struct student n1;
    while (fscanf(fptr, "%d %s %s %d %s %s\n", &n1.I_D, n1.first_name, n1.last_name, &n1.age, n1.course, n1.enrollment_status) != EOF)
    {
        if (id == n1.I_D)
        {
            printf("**************************************************************************\n");
            printf("STUDENT DETAILS:\n");
            printf("NAME: %s %s\n", n1.first_name, n1.last_name);
            printf("ID: %d\n", n1.I_D);
            printf("AGE: %d\n", n1.age);
            printf("COURSE: %s\n", n1.course);
            printf("ENROLLMENT STATUS: %s\n", n1.enrollment_status);
            printf("**************************************************************************\n");
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
    FILE *update_fptr = fopen("student.txt", "r");
    FILE *update_fptr_temp = fopen("student_temp.txt", "w");
    if (!update_fptr || !update_fptr_temp)
    {
        printf("No student records found to update.\n");
        return;
    }
    struct student n1;
    int id, found = 0;
    printf("ENTER THE STUDENT ID: ");
    scanf("%d", &id);
    while (fscanf(update_fptr, "%d %s %s %d %s %s\n", &n1.I_D, n1.first_name, n1.last_name, &n1.age, n1.course, n1.enrollment_status) != EOF)
    {
        if (id == n1.I_D)
        {
            {
                found = 1;
                printf("NEW DETAILS FOR ID %d\n", id);

                getchar();

                printf("ENTER THE FIRST NAME: ");
                fgets(n1.first_name, sizeof(n1.first_name), stdin);
                n1.first_name[strcspn(n1.first_name, "\n")] = 0;

                printf("ENTER THE LAST NAME: ");
                fgets(n1.last_name, sizeof(n1.last_name), stdin);
                n1.last_name[strcspn(n1.last_name, "\n")] = 0;

                printf("ENTER THE NEW AGE: ");
                scanf("%d", &n1.age);

                getchar();

                printf("ENTER THE NEW COURSE: ");
                fgets(n1.course, sizeof(n1.course), stdin);
                n1.course[strcspn(n1.course, "\n")] = 0;

                printf("ENTER THE NEW ENROLLMENT STATUS: ");
                fgets(n1.enrollment_status, sizeof(n1.enrollment_status), stdin);
                n1.enrollment_status[strcspn(n1.enrollment_status, "\n")] = 0;

                fprintf(update_fptr_temp, "%d %s %s %d %s %s\n", n1.I_D, n1.first_name, n1.last_name, n1.age, n1.course, n1.enrollment_status);
                printf("********************************************************\nv");
                break;
            }
        }
        else
        {
            fprintf(update_fptr_temp, "%d %s %s %d %s %s\n", n1.I_D, n1.first_name, n1.last_name, n1.age, n1.course, n1.enrollment_status);
        }
    }
    if (!found)
    {
        printf("Student with ID %d not found.\n", id);
        return;
    }
    fclose(update_fptr);
    fclose(update_fptr_temp);
    FILE *write = fopen("student.txt", "w");
    FILE *read = fopen("student_temp.txt", "r");
    while (fscanf(read, "%d %s %s %d %s %s\n", &n1.I_D, n1.first_name, n1.last_name, &n1.age, n1.course, n1.enrollment_status) != EOF)
    {

        fprintf(write, "%d %s %s %d %s %s\n", n1.I_D, n1.first_name, n1.last_name, n1.age, n1.course, n1.enrollment_status);
    }
    fclose(write);
    fclose(read);
    remove("student_temp.txt");
    printf("Student record updated successfully.\n");
}

void delete()
{
    FILE *delete_ptr = fopen("student.txt", "r");
    FILE *delete_ptr_temp = fopen("student_temp.txt", "w");
    if (!delete_ptr || !delete_ptr_temp)
    {
        printf("No student records found to update.\n");
        return;
    }
    struct student n1;
    int id, found = 0;
    printf("ENTER THE STUDENT ID: ");
    scanf("%d", &id);
    while (fscanf(delete_ptr, "%d %s %s %d %s %s\n", &n1.I_D, n1.first_name, n1.last_name, &n1.age, n1.course, n1.enrollment_status) != EOF)
    {
        if (id != n1.I_D)
        {

            fprintf(delete_ptr_temp, "%d %s %s %d %s %s\n", n1.I_D, n1.first_name, n1.last_name, n1.age, n1.course, n1.enrollment_status);
        }
    }
    if (!found)
    {
        printf("Student with ID %d not found.\n", id);
        return;
    }
    fclose(delete_ptr);
    fclose(delete_ptr_temp);
    FILE *write = fopen("student.txt", "w");
    FILE *read = fopen("student_temp.txt", "r");
    while (fscanf(read, "%d %s %s %d %s %s\n", &n1.I_D, n1.first_name, n1.last_name, &n1.age, n1.course, n1.enrollment_status) != EOF)
    {

        fprintf(write, "%d %s %s %d %s %s\n", n1.I_D, n1.first_name, n1.last_name, n1.age, n1.course, n1.enrollment_status);
    }
    fclose(write);
    fclose(read);
    remove("student_temp.txt");
    printf("Student record deleted successfully.\n");
}

void enrollment_status()
{
    FILE *ptr = fopen("student.txt", "r");
    if (ptr == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }
    int count = 0;
    struct student students[100];
    while (fscanf(ptr, "%d %s %s %d %s %s\n", &students[count].I_D, students[count].first_name, students[count].last_name, &students[count].age, students[count].course, students[count].enrollment_status) != EOF)
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
        fprintf(fptr, "%d %s %s %d %s %s\n", students[i].I_D, students[i].first_name, students[count].last_name, students[i].age, students[i].course, students[i].enrollment_status);
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
        printf("************************************************************\n");
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
        printf("********************************************************\n");
    }
    return 0;
}