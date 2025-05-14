#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct Employee_Management_System
{
    int I_D;
    char first_name[40];
    char last_name[20];
    long long contact_details;
    char department[20];
    char designation[20];
    double salary;
};

void convert_in_lowercase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }
}

void view_employee_salary_department()
{
    struct Employee_Management_System n1;
    FILE *view_employee_salary_department = fopen("employee.txt", "r");

    if (!view_employee_salary_department)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
        return;
    }

    int found = 0;
    char department[20];
    char s_department[20];

    printf("ENTER THE DEPARTMENT NAME: ");
    getchar();
    fgets(department, sizeof(department), stdin);
    department[strcspn(department, "\n")] = 0;

    convert_in_lowercase(department);

    printf(".............................................................\n");
    printf("| ID    | NAME             | DEPARTMENT   | SALARY          |\n");
    printf(".............................................................\n");

    while (fscanf(view_employee_salary_department, "%d %s %s %lld %s %s %lf\n",
                  &n1.I_D,
                  n1.first_name,
                  n1.last_name,
                  &n1.contact_details,
                  n1.designation,
                  n1.department,
                  &n1.salary) != EOF)
    {
        strcpy(s_department, n1.department);

        convert_in_lowercase(s_department);
        
        if (strcmp(department, s_department) == 0)
        {
            found = 1;
            int name_length = strlen(n1.first_name);

            printf("| %-5d | %-*s %-*s | %-12s | %-15.2lf |\n",
                   n1.I_D,
                   1,
                   n1.first_name,
                   15 - name_length,
                   n1.last_name,
                   n1.department,
                   n1.salary);
        }
    }
    printf(".............................................................\n");
    if (!found)
    {
        printf("NO EMPLOYEE IS PRESENT IN THE DEPARTMENT: %s\n", department);
        printf(".............................................................................................\n");
    }
    fclose(view_employee_salary_department);
}

void view_employee_salary_name()
{

    struct Employee_Management_System n1;
    FILE *view_employee_salary_name_ptr = fopen("employee.txt", "r");
    if (!view_employee_salary_name_ptr)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
        return;
    }
    int found = 0;
    char f_name[20];
    char l_name[20];
    char s_f_name[20];
    char s_l_name[20];
    printf("ENTER THE FIRST NAME: ");
    getchar();
    fgets(f_name, sizeof(f_name), stdin);
    f_name[strcspn(f_name, "\n")] = 0;
    convert_in_lowercase(f_name);

    printf("ENTER THE LAST NAME: ");
    fgets(l_name, sizeof(l_name), stdin);
    l_name[strcspn(l_name, "\n")] = 0;
    convert_in_lowercase(l_name);

    while (fscanf(view_employee_salary_name_ptr, "%d %s %s %lld %s %s %lf\n",
                  &n1.I_D,
                  n1.first_name,
                  n1.last_name,
                  &n1.contact_details,
                  n1.designation,
                  n1.department,
                  &n1.salary) != EOF)
    {
        strcpy(s_f_name, n1.first_name);
        strcpy(s_l_name, n1.last_name);
        convert_in_lowercase(s_f_name);
        convert_in_lowercase(s_l_name);

        if (strcmp(f_name, s_f_name) == 0 && strcmp(l_name, s_l_name) == 0)
        {
            found = 1;

            printf(".............................................................................................\n");
            printf("EMPLOYEE ID  : %d\n", n1.I_D);
            printf("EMPLOYEE NAME: %s %s\n", n1.first_name, n1.last_name);
            printf("EMPLOYEE SALARY : %.2lf\n", n1.salary);
            printf(".............................................................................................\n");
            break;
        }
    }

    if (!found)
    {
        printf("NO EMPLOYEE WITH NAME %s %s PRESENT HERE: \n", f_name, l_name);
    }
    printf(".............................................................................................\n");
    fclose(view_employee_salary_name_ptr);
}

void view_employee_salary_id()
{
    FILE *view_employee_salary_id_ptr = fopen("employee.txt", "r");
    if (!view_employee_salary_id_ptr)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
        return;
    }
    struct Employee_Management_System n1;
    int id, found = 0;
    printf("ENTER THE EMPLOYEE ID:\n");
    scanf("%d", &id);
    while (fscanf(view_employee_salary_id_ptr, "%d %s %s %lld %s %s %lf\n",
                  &n1.I_D,
                  n1.first_name,
                  n1.last_name,
                  &n1.contact_details,
                  n1.designation,
                  n1.department,
                  &n1.salary) != EOF)
    {
        if (id == n1.I_D)
        {
            found = 1;
            printf(".............................................................................................\n");
            printf("NAME : %s %s\n", n1.first_name, n1.last_name);
            printf("SALARY: %lf\n", n1.salary);
            printf(".............................................................................................\n");
            break;
        }
    }
    if (!found)
    {
        printf("NO EMPLOYEE WITH ID %d PRESENT HERE: \n", id);
    }
    printf(".............................................................................................\n");

    fclose(view_employee_salary_id_ptr);
    getchar();
}

void view_employee_salary()
{
    int option;
    while (1)
    {
        printf(".............................................................................................\n");
        printf("WANT TO VIEW SALARY BY:\n");
        printf("1. ID\n");
        printf("2. NAME\n");
        printf("3. DEPARTMENT\n");
        printf("4. BACK\n");
        printf(".............................................................................................\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            view_employee_salary_id();
            return;
            break;
        case 2:
            view_employee_salary_name();
            return;
            break;
        case 3:
            view_employee_salary_department();
            return;
            break;
        case 4:
            return;
            break;

        default:
            printf("..................................VALID INPUT, ENTER AGAIN ..................................\n");
            printf(".............................................................................................\n");
            break;
        }
    }
}

void update_employee_salary()
{
    struct Employee_Management_System n1;
    FILE *update_employee_salary_ptr = fopen("employee.txt", "r");
    FILE *update_employee_salary_ptr_temp = fopen("employee_temp.txt", "w");
    if (!update_employee_salary_ptr || !update_employee_salary_ptr_temp)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
        return;
    }
    int id, found = 0;
    printf("ENTER THE EMPLOYEE ID: ");
    scanf("%d", &id);
    while (fscanf(update_employee_salary_ptr, "%d %s %s %lld %s %s %lf\n",
                  &n1.I_D,
                  n1.first_name,
                  n1.last_name,
                  &n1.contact_details,
                  n1.designation,
                  n1.department,
                  &n1.salary) != EOF)
    {
        if (id == n1.I_D)
        {
            found = 1;
            printf("ENTER THE NEW EMPLOYEE SALARY: \n");
            scanf("%lf", &n1.salary);
            fprintf(update_employee_salary_ptr_temp, "%d %s %s %lld %s %s %lf\n",
                    id,
                    n1.first_name,
                    n1.last_name,
                    n1.contact_details,
                    n1.designation,
                    n1.department,
                    n1.salary);
        }
        else
        {
            fprintf(update_employee_salary_ptr_temp, "%d %s %s %lld %s %s %lf\n",
                    n1.I_D,
                    n1.first_name,
                    n1.last_name,
                    n1.contact_details,
                    n1.designation,
                    n1.department,
                    n1.salary);
        }
    }
    fclose(update_employee_salary_ptr);
    fclose(update_employee_salary_ptr_temp);
    FILE *update_employee_salary_ptr1 = fopen("employee.txt", "w");
    FILE *update_employee_salary_ptr_temp1 = fopen("employee_temp.txt", "r");
    if (!update_employee_salary_ptr1 || !update_employee_salary_ptr_temp1)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
        return;
    }
    while (fscanf(update_employee_salary_ptr_temp1, "%d %s %s %lld %s %s %lf\n",
                  &n1.I_D,
                  n1.first_name,
                  n1.last_name,
                  &n1.contact_details,
                  n1.designation,
                  n1.department,
                  &n1.salary) != EOF)
    {
        fprintf(update_employee_salary_ptr1, "%d %s %s %lld %s %s %lf\n",
                n1.I_D,
                n1.first_name,
                n1.last_name,
                n1.contact_details,
                n1.designation,
                n1.department,
                n1.salary);
    }
    fclose(update_employee_salary_ptr1);
    fclose(update_employee_salary_ptr_temp1);
    remove("employee_temp.txt");
    if (!found)
    {
        printf("NO EMPLOYEE FOUNT WITH ID %d", id);
    }
    getchar();
}

void manage_employee_salary()
{
    int option;
    while (1)
    {
        printf(".............................................................................................\n");
        printf("ENTER YOUR CHOICE YOU WANT TO PERFORM:\n");
        printf("1. VIEW EMPLOYEE SALARY\n");
        printf("2. RAISE EMPLOYEE SALARY\n");
        printf("3. RETURN TO MAIN MENU:\n");
        printf(".............................................................................................\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            view_employee_salary();
            return;
            break;
        case 2:
            update_employee_salary();
            return;
            break;
        case 3:
            return;
            break;

        default:
            printf("................................VALID INPUT, ENTER AGAIN ................................\n");
            break;
        }
    }
}

void add_employee()
{
    struct Employee_Management_System n1;
    FILE *add_employee_ptr;
    add_employee_ptr = fopen("employee.txt", "a");
    if (add_employee_ptr == NULL)
    {
        printf("................................ERROR IN OPENING THE FILE................................\n");
        return;
    }
    printf("ENTER EMPLOYEE DETAILS\n");
    printf(".............................................................................................\n");
    // getchar();

    printf("ENTER THE FIRST NAME OF THE EMPLOYEE: \n");
    fgets(n1.first_name, sizeof(n1.first_name), stdin);
    n1.first_name[strcspn(n1.first_name, "\n")] = 0;

    printf("ENTER THE LAST NAME OF THE EMPLOYEE: \n");
    fgets(n1.last_name, sizeof(n1.last_name), stdin);
    n1.last_name[strcspn(n1.last_name, "\n")] = 0;

    printf("ENTER THE EMPLOYEE ID: \n");
    scanf("%d", &n1.I_D);

    getchar();
    printf("ENTER THE EMPLOYEE DEPARTMENT: \n");
    fgets(n1.department, sizeof(n1.department), stdin);
    n1.department[strcspn(n1.department, "\n")] = 0;

    printf("ENTER THE EMPLOYEE DESIGNATION: \n");
    fgets(n1.designation, sizeof(n1.designation), stdin);
    n1.designation[strcspn(n1.designation, "\n")] = 0;

    printf("ENTER THE EMPLOYEE CONTACT NUMBER: \n");
    scanf("%lld", &n1.contact_details);
    while (n1.contact_details < 1000000000 || n1.contact_details > 9999999999)
    {
        printf("ENTER 10 DIGIT CONTACT NUMBER: \n");
        scanf("%lld", &n1.contact_details);
    }

    printf("ENTER THE EMPLOYEE SALARY: \n");
    scanf("%lf", &n1.salary);
    fprintf(add_employee_ptr, "%d %s %s %lld %s %s %lf\n", n1.I_D, n1.first_name, n1.last_name, n1.contact_details, n1.designation, n1.department, n1.salary);
    fclose(add_employee_ptr);
    printf("................................NEW EMPLOYEE ADDED SUCCESFULLY...............................\n");
    printf(".............................................................................................\n");
    getchar();
}

void view_employee()
{
    struct Employee_Management_System employee;
    FILE *view_employee_ptr = fopen("employee.txt", "r");
    if (view_employee_ptr == NULL)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
    }
    printf("...........................................................................................\n");
    printf("| ID    | NAME             | CONTACT NUMBER | DESIGNATION  | DEPARTMENT   | SALARY         |\n");
    printf("...........................................................................................\n");
    while (fscanf(view_employee_ptr, "%d %s %s %lld %s %s %lf\n",
                  &employee.I_D, employee.first_name,
                  employee.last_name,
                  &employee.contact_details,
                  employee.designation,
                  employee.department,
                  &employee.salary) != EOF)
    {
        int name_length = strlen(employee.first_name);
        printf("| %-5d | %-*s %-*s | %-14lld | %-12s | %-12s | %-15.2lf|\n",
               employee.I_D,
               1,
               employee.first_name,
               15 - name_length,
               employee.last_name,
               employee.contact_details,
               employee.designation,
               employee.department,
               employee.salary);
    }
    printf("...........................................................................................\n");
    fclose(view_employee_ptr);
}

void search_employee_id()
{
    struct Employee_Management_System n1;
    FILE *search_employee_ptr = fopen("employee.txt", "r");
    int id, found = 0, salary_choise = 0;
    printf("ENTER THE EMPLOYEE ID: ");
    scanf("%d", &id);
    printf("WANT TO ADD EMPLOYEE SALARY TO THE LIST:-\n");
    while (1)
    {
        printf("1. YES:\n");
        printf("2. NO:\n");
        printf(".............................................................................................\n");
        printf("ENTER YOUR CHOISE: ");
        scanf("%d", &salary_choise);
        printf(".............................................................................................\n");
        if (salary_choise == 1 || salary_choise == 2)
        {
            break;
        }
        else
        {
            printf("................................INVALID INPUT ENTER AGAIN:................................ \n");
        }
    }
    while (fscanf(search_employee_ptr, "%d %s %s %lld %s %s %lf\n",
                  &n1.I_D,
                  n1.first_name,
                  n1.last_name,
                  &n1.contact_details,
                  n1.designation,
                  n1.department,
                  &n1.salary) != EOF)
    {
        if (id == n1.I_D)
        {
            found = 1;
            if (salary_choise == 1)
            {
                printf("DETAILS OF SEARCHED EMPLOYEE\n");
                printf(".............................................................................................\n");
                printf("EMPLOYEE ID  : %d\n", n1.I_D);
                printf("EMPLOYEE NAME: %s %s\n", n1.first_name, n1.last_name);
                printf("EMPLOYEE CONTACT NO.: %lld\n", n1.contact_details);
                printf("EMPLOYEE DESIGNATION : %s\n", n1.designation);
                printf("EMPLOYEE DEPARTMENT : %s\n", n1.department);
                printf("EMPLOYEE SALARY : %.2lf\n", n1.salary);
                printf(".............................................................................................\n");
            }
            else
            {
                found = 1;
                printf("DETAILS OF SEARCHED EMPLOYEE\n");
                printf(".............................................................................................\n");
                printf("EMPLOYEE ID  : %d\n", n1.I_D);
                printf("EMPLOYEE NAME: %s %s\n", n1.first_name, n1.last_name);
                printf("EMPLOYEE CONTACT NO.: %lld\n", n1.contact_details);
                printf("EMPLOYEE DESIGNATION : %s\n", n1.designation);
                printf("EMPLOYEE DEPARTMENT : %s\n", n1.department);
                printf(".............................................................................................\n");
            }
            break;
        }
    }

    if (!found)
    {
        printf("NO EMPLOYEE WITH ID %d PRESENT HERE: \n", id);
    }
    printf(".............................................................................................\n");
    fclose(search_employee_ptr);
    getchar();
}

void search_employee_name()
{
    struct Employee_Management_System n1;
    FILE *search_employee_ptr = fopen("employee.txt", "r");
    if (!search_employee_ptr)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
        return;
    }
    int found = 0, salary_choise = 0;
    char f_name[20];
    char l_name[20];
    char s_f_name[20];
    char s_l_name[20];
    printf("ENTER THE FIRST NAME: ");
    getchar();

    fgets(f_name, sizeof(f_name), stdin);
    f_name[strcspn(f_name, "\n")] = 0;
    convert_in_lowercase(f_name);

    printf("ENTER THE LAST NAME: ");
    fgets(l_name, sizeof(l_name), stdin);
    l_name[strcspn(l_name, "\n")] = 0;
    convert_in_lowercase(l_name);

    printf("WANT TO ADD EMPLOYEE SALARY TO THE LIST:-\n");
    while (1)
    {
        printf("1. YES:\n");
        printf("2. NO:\n");
        printf("ENTER YOUR CHOISE: ");
        scanf("%d", &salary_choise);
        printf(".............................................................................................\n");
        if (salary_choise == 1 || salary_choise == 2)
        {
            break;
        }
        else
        {
            printf("................................INVALID INPUT ENTER AGAIN:................................\n");
        }
    }
    while (fscanf(search_employee_ptr, "%d %s %s %lld %s %s %lf\n",
                  &n1.I_D,
                  n1.first_name,
                  n1.last_name,
                  &n1.contact_details,
                  n1.designation,
                  n1.department,
                  &n1.salary) != EOF)
    {
        strcpy(s_f_name, n1.first_name);
        strcpy(s_l_name, n1.last_name);
        convert_in_lowercase(s_f_name);
        convert_in_lowercase(s_l_name);

        if (strcmp(f_name, s_f_name) == 0 && strcmp(l_name, s_l_name) == 0)
        {
            found = 1;
            if (salary_choise == 1)
            {
                printf("DETAILS OF SEARCHED EMPLOYEE\n");
                printf(".............................................................................................\n");
                printf("EMPLOYEE ID  : %d\n", n1.I_D);
                printf("EMPLOYEE NAME: %s %s\n", n1.first_name, n1.last_name);
                printf("EMPLOYEE CONTACT NO.: %lld\n", n1.contact_details);
                printf("EMPLOYEE DESIGNATION : %s\n", n1.designation);
                printf("EMPLOYEE DEPARTMENT : %s\n", n1.department);
                printf("EMPLOYEE SALARY : %.2lf\n", n1.salary);
                printf(".............................................................................................\n");
            }
            else
            {
                printf("DETAILS OF SEARCHED EMPLOYEE\n");
                printf(".............................................................................................\n");
                printf("EMPLOYEE ID  : %d\n", n1.I_D);
                printf("EMPLOYEE NAME: %s %s\n", n1.first_name, n1.last_name);
                printf("EMPLOYEE CONTACT NO.: %lld\n", n1.contact_details);
                printf("EMPLOYEE DESIGNATION : %s\n", n1.designation);
                printf("EMPLOYEE DEPARTMENT : %s\n", n1.department);
                printf(".............................................................................................\n");
            }
            break;
        }
    }
    if (!found)
    {
        printf("NO EMPLOYEE WITH NAME %s %s PRESENT HERE: \n", f_name, l_name);
    }
    printf(".............................................................................................\n");
    fclose(search_employee_ptr);
    getchar();
}

void search_employee_department()
{
    struct Employee_Management_System n1;
    FILE *search_employee_ptr = fopen("employee.txt", "r");

    if (!search_employee_ptr)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
        return;
    }

    int found = 0, salary_choice = 0;
    char department[20];
    char s_department[20];

    printf("ENTER THE DEPARTMENT NAME: ");
    getchar();
    fgets(department, sizeof(department), stdin);
    department[strcspn(department, "\n")] = 0;
    convert_in_lowercase(department);

    printf(".............................................................................................\n");
    printf("WANT TO ADD EMPLOYEE SALARY TO THE TABLE:-\n");
    while (1)
    {
        printf("1. YES:\n");
        printf("2. NO:\n");
        printf("ENTER YOUR CHOISE: ");
        scanf("%d", &salary_choice);
        if (salary_choice == 1 || salary_choice == 2)
        {
            break;
        }
        else
        {
            printf("INVALID INPUT, ENTER AGAIN.\n");
        }
    }

    if (salary_choice == 1)
    {
        printf(".............................................................................................\n");
        printf("| ID    | NAME             | CONTACT NUMBER | DESIGNATION  | DEPARTMENT   | SALARY          |\n");
        printf(".............................................................................................\n");
    }
    else
    {
        printf("...........................................................................\n");
        printf("| ID    | NAME             | CONTACT NUMBER | DESIGNATION  | DEPARTMENT   |\n");
        printf("...........................................................................\n");
    }

    while (fscanf(search_employee_ptr, "%d %s %s %lld %s %s %lf\n",
                  &n1.I_D,
                  n1.first_name,
                  n1.last_name,
                  &n1.contact_details,
                  n1.designation,
                  n1.department,
                  &n1.salary) != EOF)
    {
        strcpy(s_department, n1.department);
        convert_in_lowercase(s_department);
        if (strcmp(department, s_department) == 0)
        {
            found = 1;
            int name_length = strlen(n1.first_name);

            if (salary_choice == 1)
            {
                printf("| %-5d | %-*s %-*s | %-14lld | %-12s | %-12s | %-15.2lf |\n",
                       n1.I_D,
                       1,
                       n1.first_name,
                       15 - name_length,
                       n1.last_name,
                       n1.contact_details,
                       n1.designation,
                       n1.department,
                       n1.salary);
            }
            else
            {
                printf("| %-5d | %-*s %-*s | %-14lld | %-12s | %-12s |\n",
                       n1.I_D,
                       1,
                       n1.first_name,
                       15 - name_length,
                       n1.last_name,
                       n1.contact_details,
                       n1.designation,
                       n1.department);
            }
        }
    }
    if (salary_choice == 1)
    {
        printf(".............................................................................................\n");
    }
    else
    {
        printf("...........................................................................\n");
    }
    if (!found)
    {
        printf("NO EMPLOYEE IS PRESENT IN THE DEPARTMENT: %s\n", department);
        printf(".............................................................................................\n");
    }
    fclose(search_employee_ptr);
    getchar();
}

void search_employee()
{
    int choise = 0;
    while (choise != 4)
    {
        printf(".............................................................................................\n");
        printf("SEARCH THE EMPLOYEE BY IT's :\n");
        printf(".............................................................................................\n");
        printf("1. ID\n");
        printf("2. NAME\n");
        printf("3. DEPARTMENT\n");
        printf("4. RETURN TO THE MAIN BAR: \n");
        printf(".............................................................................................\n");
        printf("ENTER YOUR CHOISE: ");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            search_employee_id();
            return;
            break;
        case 2:
            search_employee_name();
            return;
            break;
        case 3:
            search_employee_department();
            return;
            break;
        case 4:
            getchar();
            break;
        default:
            printf("ENTER THE VAILD NUMBER\n");
            break;
        }
    }
}

void update_employee_details()
{
    struct Employee_Management_System n1;
    FILE *update_employee_details_ptr = fopen("employee.txt", "r");
    FILE *update_employee_details_ptr_temp = fopen("employee_temp.txt", "w");
    if (!update_employee_details_ptr || !update_employee_details_ptr_temp)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
        return;
    }
    int id, found = 0;
    printf("ENTER THE EMPLOYEE ID: ");
    scanf("%d", &id);
    while (fscanf(update_employee_details_ptr, "%d %s %s %lld %s %s %lf\n",
                  &n1.I_D,
                  n1.first_name,
                  n1.last_name,
                  &n1.contact_details,
                  n1.designation,
                  n1.department,
                  &n1.salary) != EOF)
    {
        if (id == n1.I_D)
        {
            found = 1;
            printf("ENTER NEW DETAILS\n");
            printf(".............................................................................................\n");
            getchar();
            printf("ENTER FIRST NAME OF THE EMPLOYEE: \n");
            fgets(n1.first_name, sizeof(n1.first_name), stdin);
            n1.first_name[strcspn(n1.first_name, "\n")] = 0;

            printf("ENTER LAST NAME OF THE EMPLOYEE: \n");
            fgets(n1.last_name, sizeof(n1.last_name), stdin);
            n1.last_name[strcspn(n1.last_name, "\n")] = 0;

            printf("ENTER THE EMPLOYEE DEPARTMENT: \n");
            fgets(n1.department, sizeof(n1.department), stdin);
            n1.department[strcspn(n1.department, "\n")] = 0;

            printf("ENTER THE EMPLOYEE DESIGNATION: \n");
            fgets(n1.designation, sizeof(n1.designation), stdin);
            n1.designation[strcspn(n1.designation, "\n")] = 0;

            printf("ENTER THE EMPLOYEE CONTACT NUMBER: \n");
            scanf("%lld", &n1.contact_details);

            printf("ENTER THE EMPLOYEE SALARY: \n");
            scanf("%lf", &n1.salary);
            fprintf(update_employee_details_ptr_temp, "%d %s %s %lld %s %s %lf\n",
                    id,
                    n1.first_name,
                    n1.last_name,
                    n1.contact_details,
                    n1.designation,
                    n1.department,
                    n1.salary);
        }
        else
        {
            fprintf(update_employee_details_ptr_temp, "%d %s %s %lld %s %s %lf\n",
                    n1.I_D,
                    n1.first_name,
                    n1.last_name,
                    n1.contact_details,
                    n1.designation,
                    n1.department,
                    n1.salary);
        }
    }
    fclose(update_employee_details_ptr);
    fclose(update_employee_details_ptr_temp);
    FILE *update_employee_details_ptr1 = fopen("employee.txt", "w");
    FILE *update_employee_details_ptr_temp1 = fopen("employee_temp.txt", "r");
    if (!update_employee_details_ptr1 || !update_employee_details_ptr_temp1)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
        return;
    }
    while (fscanf(update_employee_details_ptr_temp1, "%d %s %s %lld %s %s %lf\n",
                  &n1.I_D,
                  n1.first_name,
                  n1.last_name,
                  &n1.contact_details,
                  n1.designation,
                  n1.department,
                  &n1.salary) != EOF)
    {
        fprintf(update_employee_details_ptr1, "%d %s %s %lld %s %s %lf\n",
                n1.I_D,
                n1.first_name,
                n1.last_name,
                n1.contact_details,
                n1.designation,
                n1.department,
                n1.salary);
    }
    fclose(update_employee_details_ptr1);
    fclose(update_employee_details_ptr_temp1);
    remove("employee_temp.txt");
    if (!found)
    {
        printf("NO EMPLOYEE FOUNT WITH ID %d", id);
    }
    getchar();
}

void employee_delete()
{
    struct Employee_Management_System n1;
    FILE *employee_delete_ptr;
    employee_delete_ptr = fopen("employee.txt", "r");
    FILE *employee_delete_ptr_temp;
    employee_delete_ptr_temp = fopen("employee_delete_temp.txt", "w");
    if (employee_delete_ptr == NULL || employee_delete_ptr_temp == NULL)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
        return;
    }
    int id, found = 0;
    printf("ENTER THE ID OF THE EMPLOYEE: ");
    scanf("%d", &id);
    while (fscanf(employee_delete_ptr, "%d %s %s %lld %s %s %lf\n",
                  &n1.I_D,
                  n1.first_name,
                  n1.last_name,
                  &n1.contact_details,
                  n1.designation,
                  n1.department,
                  &n1.salary) != EOF)
    {
        if (id != n1.I_D)
        {
            fprintf(employee_delete_ptr_temp, "%d %s %s %lld %s %s %lf\n", n1.I_D,
                    n1.first_name,
                    n1.last_name,
                    n1.contact_details,
                    n1.designation,
                    n1.department,
                    n1.salary);
        }
        else
        {
            found = 1;
        }
    }
    fclose(employee_delete_ptr);
    fclose(employee_delete_ptr_temp);
    FILE *employee_delete_ptr_temp1 = fopen("employee_delete_temp.txt", "r");
    FILE *employee_delete_ptr1 = fopen("employee.txt", "w");
    if (employee_delete_ptr1 == NULL || employee_delete_ptr_temp1 == NULL)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
        return;
    }
    while (fscanf(employee_delete_ptr_temp1, "%d %s %s %lld %s %s %lf\n",
                  &n1.I_D, n1.first_name, n1.last_name, &n1.contact_details,
                  n1.designation, n1.department, &n1.salary) != EOF)
    {
        fprintf(employee_delete_ptr1, "%d %s %s %lld %s %s %lf\n",
                n1.I_D, n1.first_name, n1.last_name, n1.contact_details,
                n1.designation, n1.department, n1.salary);
    }
    fclose(employee_delete_ptr1);
    fclose(employee_delete_ptr_temp1);
    if (!found)
    {
        printf("NO EMPLOYEE WITH THIS ID %d WORK HERE: \n", id);
    }
    else
    {
        printf("EMPLOYEE WITH THE ID %d DELETED FROM THE SYSTEM:\n", id);
    }
    getchar();
}

void sort_employee_id()
{
    struct Employee_Management_System sort_employee_id_struct[100];
    FILE *sort_employee_id_ptr = fopen("employee.txt", "r");
    if (!sort_employee_id_ptr)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
    }
    int count = 0;
    while (fscanf(sort_employee_id_ptr, "%d %s %s %lld %s %s %lf\n", &sort_employee_id_struct[count].I_D,
                  sort_employee_id_struct[count].first_name, sort_employee_id_struct[count].last_name,
                  &sort_employee_id_struct[count].contact_details, sort_employee_id_struct[count].designation,
                  sort_employee_id_struct[count].department, &sort_employee_id_struct[count].salary) != EOF)
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (sort_employee_id_struct[j].I_D > sort_employee_id_struct[j + 1].I_D)
            {
                struct Employee_Management_System temp = sort_employee_id_struct[j];
                sort_employee_id_struct[j] = sort_employee_id_struct[j + 1];
                sort_employee_id_struct[j + 1] = temp;
            }
        }
    }
    printf("............................................................................................\n");
    printf("| ID    | NAME             | CONTACT NUMBER | DESIGNATION  | DEPARTMENT   | SALARY         |\n");
    printf("............................................................................................\n");
    for (int i = 0; i < count; i++)
    {
        int name_length = strlen(sort_employee_id_struct[i].first_name);
        printf("| %-5d | %-*s %-*s | %-14lld | %-12s | %-12s | %-15.2lf|\n", sort_employee_id_struct[i].I_D, 1,
               sort_employee_id_struct[i].first_name, 15 - name_length, sort_employee_id_struct[i].last_name,
               sort_employee_id_struct[i].contact_details, sort_employee_id_struct[i].designation,
               sort_employee_id_struct[i].department, sort_employee_id_struct[i].salary);
    }
    printf("............................................................................................\n");
    fclose(sort_employee_id_ptr);
    getchar();
}

void sort_employee_salary()
{
    struct Employee_Management_System sort_employee_id_struct[100];
    FILE *sort_employee_id_ptr = fopen("employee.txt", "r");
    if (!sort_employee_id_ptr)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
    }
    int count = 0;
    while (fscanf(sort_employee_id_ptr, "%d %s %s %lld %s %s %lf\n", &sort_employee_id_struct[count].I_D,
                  sort_employee_id_struct[count].first_name, sort_employee_id_struct[count].last_name,
                  &sort_employee_id_struct[count].contact_details, sort_employee_id_struct[count].designation,
                  sort_employee_id_struct[count].department, &sort_employee_id_struct[count].salary) != EOF)
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (sort_employee_id_struct[j].salary > sort_employee_id_struct[j + 1].salary)
            {
                struct Employee_Management_System temp = sort_employee_id_struct[j];
                sort_employee_id_struct[j] = sort_employee_id_struct[j + 1];
                sort_employee_id_struct[j + 1] = temp;
            }
        }
    }
    printf("............................................................................................\n");
    printf("| ID    | NAME             | CONTACT NUMBER | DESIGNATION  | DEPARTMENT   | SALARY         |\n");
    printf("............................................................................................\n");
    for (int i = 0; i < count; i++)
    {
        int name_length = strlen(sort_employee_id_struct[i].first_name);
        printf("| %-5d | %-*s %-*s | %-14lld | %-12s | %-12s | %-15.2lf|\n", sort_employee_id_struct[i].I_D, 1,
               sort_employee_id_struct[i].first_name, 15 - name_length, sort_employee_id_struct[i].last_name,
               sort_employee_id_struct[i].contact_details, sort_employee_id_struct[i].designation,
               sort_employee_id_struct[i].department, sort_employee_id_struct[i].salary);
    }
    printf("............................................................................................\n");
    fclose(sort_employee_id_ptr);
    getchar();
}

void sort_employee_name()
{
    struct Employee_Management_System sort_employee_id_struct[100];
    FILE *sort_employee_id_ptr = fopen("employee.txt", "r");
    if (!sort_employee_id_ptr)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
    }
    int count = 0;
    while (fscanf(sort_employee_id_ptr, "%d %s %s %lld %s %s %lf\n",
                  &sort_employee_id_struct[count].I_D,
                  sort_employee_id_struct[count].first_name,
                  sort_employee_id_struct[count].last_name,
                  &sort_employee_id_struct[count].contact_details,
                  sort_employee_id_struct[count].designation,
                  sort_employee_id_struct[count].department,
                  &sort_employee_id_struct[count].salary) != EOF)
    {
        count++;
    }
    fclose(sort_employee_id_ptr);

    char f_name[50], l_name[20];
    char sf_name[50], sl_name[20];
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            strcpy(f_name, sort_employee_id_struct[j].first_name); // coping structure first name to f_name using strcpy function
            strcpy(l_name, sort_employee_id_struct[j].last_name);
            strcpy(sf_name, sort_employee_id_struct[j + 1].first_name);
            strcpy(sl_name, sort_employee_id_struct[j + 1].last_name);
            convert_in_lowercase(f_name);
            convert_in_lowercase(l_name);
            convert_in_lowercase(sf_name);
            convert_in_lowercase(sl_name);
            if (strcmp(strcat(f_name, l_name), strcat(sf_name, sl_name)) > 0) // strcat use to add two string  and strcmp use to compare two string
            {
                struct Employee_Management_System temp = sort_employee_id_struct[j];
                sort_employee_id_struct[j] = sort_employee_id_struct[j + 1];
                sort_employee_id_struct[j + 1] = temp;
            }
        }
    }
    printf("............................................................................................\n");
    printf("| ID    | NAME             | CONTACT NUMBER | DESIGNATION  | DEPARTMENT   | SALARY         |\n");
    printf("............................................................................................\n");
    for (int i = 0; i < count; i++)
    {
        int name_length = strlen(sort_employee_id_struct[i].first_name);
        printf("| %-5d | %-*s %-*s | %-14lld | %-12s | %-12s | %-15.2lf|\n",
               sort_employee_id_struct[i].I_D,
               1,
               sort_employee_id_struct[i].first_name,
               15 - name_length,
               sort_employee_id_struct[i].last_name,
               sort_employee_id_struct[i].contact_details,
               sort_employee_id_struct[i].designation,
               sort_employee_id_struct[i].department,
               sort_employee_id_struct[i].salary);
    }
    printf("............................................................................................\n");
    getchar();
}

void sort_employee()
{
    int option = 0;
    while (1)
    {
        printf("WANT TO SORT THE EMPLOYEE BY: \n");
        printf("1. ID\n");
        printf("2. NAME\n");
        printf("3. SALARY\n");
        printf("4. BACK\n");
        printf(".............................................................................................\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &option);
        // option = number();
        switch (option)
        {
        case 1:
            sort_employee_id();
            return;
            break;
        case 2:
            sort_employee_name();
            return;
            break;
        case 3:
            sort_employee_salary();
            return;
            break;
        case 4:
            getchar();
            return;
            break;
        default:
            printf("INVALID INPUT, ENTER AGAIN");
            break;
        }
    }
}

void generate_report_department()
{
    struct Employee_Management_System n1;
    FILE *search_employee_ptr = fopen("employee.txt", "r");

    if (!search_employee_ptr)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
        return;
    }

    int found = 0, salary_choice = 0;
    char department[20];
    char s_department[20];

    printf("ENTER THE DEPARTMENT NAME: ");
    getchar();
    fgets(department, sizeof(department), stdin);
    department[strcspn(department, "\n")] = 0;
    convert_in_lowercase(department);

    printf(".............................................................................................\n");
    printf("WANT TO ADD EMPLOYEE SALARY TO THE TABLE:-\n");
    while (1)
    {
        printf("1. YES:\n");
        printf("2. NO:\n");
        printf("ENTER YOUR CHOISE: ");
        scanf("%d", &salary_choice);
        if (salary_choice == 1 || salary_choice == 2)
        {
            break;
        }
        else
        {
            printf("..................................INVALID INPUT, ENTER AGAIN.................................\n");
        }
    }

    if (salary_choice == 1)
    {
        printf(".............................................................................................\n");
        printf("| ID    | NAME             | CONTACT NUMBER | DESIGNATION  | DEPARTMENT   | SALARY          |\n");
        printf(".............................................................................................\n");
    }
    else
    {
        printf("...........................................................................\n");
        printf("| ID    | NAME             | CONTACT NUMBER | DESIGNATION  | DEPARTMENT   |\n");
        printf("...........................................................................\n");
    }

    while (fscanf(search_employee_ptr, "%d %s %s %lld %s %s %lf\n", &n1.I_D, n1.first_name, n1.last_name, &n1.contact_details, n1.designation, n1.department, &n1.salary) != EOF)
    {
        strcpy(s_department, n1.department);
        convert_in_lowercase(s_department);
        if (strcmp(department, s_department) == 0)
        {
            found = 1;
            int name_length = strlen(n1.first_name);

            if (salary_choice == 1)
            {
                printf("| %-5d | %-*s %-*s | %-14lld | %-12s | %-12s | %-15.2lf |\n",
                       n1.I_D, 1, n1.first_name, 15 - name_length, n1.last_name,
                       n1.contact_details, n1.designation, n1.department, n1.salary);
            }
            else
            {
                printf("| %-5d | %-*s %-*s | %-14lld | %-12s | %-12s |\n",
                       n1.I_D, 1, n1.first_name, 15 - name_length, n1.last_name,
                       n1.contact_details, n1.designation, n1.department);
            }
        }
    }
    if (salary_choice == 1)
    {
        printf(".............................................................................................\n");
    }
    else
    {
        printf("...........................................................................\n");
    }
    if (!found)
    {
        printf("NO EMPLOYEE IS PRESENT IN THE DEPARTMENT: %s\n", department);
        printf(".............................................................................................\n");
    }
    fclose(search_employee_ptr);
    getchar();
}

void generate_report_salary()
{
    FILE *generate_report_salary_ptr = fopen("employee.txt", "r");
    if (!generate_report_salary_ptr)
    {
        printf("..................................ERROR IN OPENING THE FILE..................................\n");
        return;
    }
    struct Employee_Management_System n1;
    int min_salary, max_salary;

    printf("ENTER THE MINIMUM SALARY: ");
    scanf("%d", &min_salary);

    printf("ENTER THE MAXIMUM SALARY: ");
    scanf("%d", &max_salary);
    printf(".............................................................................................\n");
    printf("| ID    | NAME             | CONTACT NUMBER | DESIGNATION  | DEPARTMENT   | SALARY          |\n");
    printf(".............................................................................................\n");
    while (fscanf(generate_report_salary_ptr, "%d %s %s %lld %s %s %lf\n", &n1.I_D, n1.first_name, n1.last_name, &n1.contact_details, n1.designation, n1.department, &n1.salary) != EOF)
    {
        if (n1.salary > min_salary && n1.salary < max_salary)
        {
            int name_length = strlen(n1.first_name);
            printf("| %-5d | %-*s %-*s | %-14lld | %-12s | %-12s | %-15.2lf |\n",
                   n1.I_D, 1, n1.first_name, 15 - name_length, n1.last_name,
                   n1.contact_details, n1.designation, n1.department, n1.salary);
        }
    }
    printf(".............................................................................................\n");
    fclose(generate_report_salary_ptr);
    getchar();
}

void generate_report()
{
    int option;
    while (1)
    {
        printf(".............................................................................................\n");
        printf("GENERATE REPORT BY:\n");
        printf("1. DEPARTMENT:\n");
        printf("2. SALARY\n");
        printf("3. RETURN TO MAIN MENU: \n");
        printf(".............................................................................................\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            generate_report_department();
            return;
            break;
        case 2:
            generate_report_salary();
            return;
            break;
        case 3:
            getchar();
            return;
            break;
        default:
            printf("..................................INVALID INPUT, ENTER AGAIN.................................\n");
            printf(".............................................................................................\n");
            break;
        }
    }
}

int is_numeric(const char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isdigit(str[i]))
        {
            return 0;
        }
    }
    return 1;
}

int number()
{
    char input[100];
    while (1)
    {
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        if (is_numeric(input))
        {
            return atoi(input);
        }
        else
        {
            printf("----------------------------INPUT '%s' IS NOT NUMERIC, ENTER AGAIN---------------------------\n", input);
        }
        return 0;
    }
}

int main()
{
    int choise = 0;
    while (choise != 9)
    {
        printf("................................. EMPLOYEE MANAGEMENT SYSTEM ................................\n");
        printf("1. ADD EMPLOYEE\n");
        printf("2. VIEW ALL EMPLOYEE\n");
        printf("3. SEARCH EMPLOYEE\n");
        printf("4. UPDATE EMPLOYEE DETAILS\n");
        printf("5. DELETE EMPLOYEE\n");
        printf("6. MANAGE EMPLOYEE SALARIES\n");
        printf("7. GENERATE REPORTS\n");
        printf("8. SORT EMPLOYEES\n");
        printf("9. EXIT\n");
        printf(".............................................................................................\n");
        printf("ENTER YOUR CHOISE: \n");
        choise = number();
        switch (choise)
        {
        case 1:
            add_employee();
            break;
        case 2:
            view_employee();
            break;
        case 3:
            search_employee();
            break;
        case 4:
            update_employee_details();
            break;
        case 5:
            employee_delete();
            break;
        case 6:
            manage_employee_salary();
            break;
        case 7:
            generate_report();
            break;
        case 8:
            sort_employee();
            break;
        case 9:
            printf("EXITING.......\n");
            break;
        default:
            if (choise > 9)
            {
                printf("................................VALID INPUT, ENTER AGAIN ................................\n");
            }
            break;
        }
    }
    return 0;
}