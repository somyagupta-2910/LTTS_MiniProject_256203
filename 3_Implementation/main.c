#include "product.h"

int main()
{
    Employee *employee[1000];
    int no_of_employees = 0;
    Non_Employee *non_employee[1000];
    int no_of_non_employees = 0;
    FILE *fp_emp = NULL; /*Intializing the file pointer for employee database file*/
    FILE *fp_non_emp = NULL;/*Intializing the file pointer for non-employee database file*/

    //Opening of employee database file and performing fread function
    fp_emp = fopen("employee_database.txt", "a+");
    if (fp_emp == NULL)
    {
        printf("File Does Not Exist.\n");
    }
    if (fp_emp != NULL)
    {
        while (fread(&employee[no_of_employees], sizeof(employee[no_of_employees]), 1, fp_emp) == 1)
        {
            no_of_employees++;
        }
    }

    //Opening of non-employee database file and performing fread function
    fp_non_emp = fopen("non_employee_database.txt", "a+");
    if (fp_non_emp == NULL)
    {
        printf("File Does Not Exist.\n");
    }
    if (fp_non_emp != NULL)
    {
        while (fread(&non_employee[no_of_non_employees], sizeof(non_employee[no_of_non_employees]), 1, fp_non_emp) == 1)
        {
            no_of_non_employees++;
        }
    }

    int choice; /*This variable asks the user to enter any choice to perform the following functions.*/
    while(1)
    {
        printf("Enter 1 Create a record list for a particular day of employees\n");
        printf("Enter 2 Create a record list for a particular day of non-employees\n");
        printf("Enter 3 to list employees visited in a day\n");
        printf("Enter 4 to list non-employees visited in a day\n");
        printf("Enter 5 to list employees temperatures\n");
        printf("Enter 6 to list all the non-employees temperatures\n");
        printf("Enter 7 to view an employee\n");
        printf("Enter 8 to write data to employee database file\n"); 
        printf("Enter 9 to write data to non-employee database file\n");
        printf("Enter -1 to exit.\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);

        if(choice == -1){
            printf("Exiting...\n");
            break;
        }

        else if(choice >= 1 && choice <= 9)
        {
            switch(choice)
            {
                case 1:
                    int emp_s_no; 
                    printf("Enter Data Entry Number\n");
                    scanf("%d", &emp_s_no); 
                    enter_employee_details(employee, &emp_s_no);
                    break;

                case 2:
                    int non_emp_s_no; 
                    printf("Enter Data Entry Number\n");
                    scanf("%d", &non_emp_s_no); 
                    enter_non_employee_details(non_employee, &non_emp_s_no);
                    break;

                case 3:
                    int no_of_employees_to_be_viewed; 
                    printf("Enter the number of employees to be viewed\n");
                    scanf("%d", &no_of_employees_to_be_viewed);
                    view_employees_visited(employee, &no_of_employees_to_be_viewed);
                    break;
                
                case 4:
                    int no_of_non_employees_to_be_viewed;
                    printf("Enter the number of non-employees to be viewed\n");
                    scanf("%d", &no_of_non_employees_to_be_viewed);
                    view_non_employees_visited(non_employee, &no_of_non_employees_to_be_viewed);
                    break;

                case 5:
                    int temp_choice;
                    printf("Enter 1 to view employees with normal temperatures\n");
                    printf("Enter 2 to view employees with abnormal temperatures\n");
                    scanf("%d", &temp_choice);
                    while(1)
                    {
                        if(view_employees_temperature(employee, &no_of_employees, &temp_choice) == WRONG_CHOICE)
                        {
                            printf("Wrong choice entered for temperature selection. Choose the correct option.\n");
                            continue;
                        }
                        break;
                    }
                    break;

                case 6:
                    int temp_choice;
                    printf("Enter 1 to view non-employees with normal temperatures\n");
                    printf("Enter 2 to view non-employees with abnormal temperatures\n");
                    scanf("%d", &temp_choice);
                    while(1)
                    {
                        if(view_non_employees_temperature(non_employee, &no_of_non_employees, &temp_choice) == WRONG_CHOICE)
                        {
                            printf("Wrong choice entered for temperature selection. Choose the correct option.\n");
                            continue;
                        }
                        break;
                    }
                    break;

                case 7:
                    int search_choice;
                    int search_flag = 0;
                    printf("Enter 1 to search employee by ID.\n");
                    printf("Enter 2 to search employee by Name.\n");
                    scanf("%d", &search_choice);
                    while(1)
                    {
                        if(view_employee_by_parameters(employee, &no_of_employees, &search_choice) == WRONG_CHOICE)
                        {
                            printf("Wrong choice entered.\n");
                            continue;
                        }
                        break;
                    }
                    break;

                case 8:
                    char fileName[30] = "employee_database.txt";
                    write_emp_file(employee, &no_of_employees, fileName);
                    break;

                case 9:
                    char fileName[30] = "non_employee_database.txt";
                    write_non_emp_file(non_employee, &no_of_non_employees, fileName);
                    break;
            }
            break;
        }

        else
        {
            printf("Input Command not recognized.\nEnter the correct choice.\n");
            continue;
        }
    }
    fclose(fp_emp);
    fclose(fp_non_emp);
}