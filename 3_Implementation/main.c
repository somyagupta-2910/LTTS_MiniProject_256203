#include "product.h"

int main()
{
    FILE *fp = NULL;
    int file_input;
    char fileName[30];
    printf("Enter 1 if you want to load File\n");
    scanf("%d", &file_input);
    if(file_input == 1)
    {
        printf("Please enter the File Name: \n");
        gets(fileName);
    }

    else
    {
        printf("Wrong input detected, Please enter the correct choice\n");
    }
    
    fp = fopen("employee_database.txt", "a+");
    int choice;
    while(1)
    {
        printf("Enter 1 Create a record list for a particular day of employees\n");
        printf("Enter 2 Create a record list for a particular day of non-employees\n");
        printf("Enter 3 to list employees visited in a day\n");
        printf("Enter 4 to list non-employees visited in a day\n");
        printf("Enter 5 to list employees temperatures\n");
        printf("Enter 6 to list all the non-employees temperatures\n");
        printf("Enter 7 to view an employee\n");
        printf("Enter 8 to save data to file\n"); 
        printf("Enter 9 to print data from file\n");
        printf("Enter 10 to delete data from record");
        printf("Enter 11 to display all records\n");
        printf("Enter -1 to exit.\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);

        if(choice == -1){
            printf("Exiting...\n");
            break;
        }

        else if(choice >= 1 && choice <= 10)
        {
            switch(choice)
            {
                case 1:
                    int emp_s_no;
                    printf("Enter Data Entry Number\n");
                    scanf("%d", &emp_s_no);
                    enter_employee_details(&emp_s_no);
                    break;

                case 2:
                    int non_emp_s_no;
                    printf("Enter Data Entry Number\n");
                    scanf("%d", &non_emp_s_no);
                    enter_non_employee_details(&non_emp_s_no);
                    break;

                case 3:
                    int no_of_employees_to_be_viewed;
                    printf("Enter the number of employees to be viewed\n");
                    scanf("%d", &no_of_employees_to_be_viewed);
                    view_employees_visited(&no_of_employees_to_be_viewed);
                    break;
                
                case 4:
                    int no_of_non_employees_to_be_viewed;
                    printf("Enter the number of non-employees to be viewed\n");
                    scanf("%d", &no_of_non_employees_to_be_viewed);
                    view_non_employees_visited(&no_of_non_employees_to_be_viewed);
                    break;

                case 5:
                    int no_of_employees;
                    printf("Enter the number of employees whose temperature has to be viewed\n");
                    scanf("%d", &no_of_employees);
                    if(view_employees_temperature(&no_of_employees) == 0)
                    {
                        printf("Wrong choice entered for temperature selection. Choose the correct option.\n");
                        continue;
                    }
                    break;

                case 6:
                    int no_of_non_employees;
                    printf("Enter the number of non-employees whose temperature has to be viewed\n");
                    scanf("%d", &no_of_non_employees);
                    if(view_non_employees_temperature(&no_of_non_employees) == 0)
                    {
                        printf("Wrong choice entered for temperature selection. Choose the correct option.\n");
                        continue;
                    }
                    break;

                case 7:
                    int no_of_employees;
                    if(view_employee_by_parameters(&no_of_employees) == 0);
                    {
                        printf("Wrong choice entered.\n");
                        continue;
                    }
                    break;

                case 8:
                    printf("Thanks\n");
                    break;

                case 9:
                    printf("Thanks\n");
                    break;

                case 10:
                    printf("Thanks\n");
                    break;

                case 11:
                    printf("Thanks\n");
                    break;
                
                case 12:
                    printf("Thanks\n");
                    break;

                case 13:
                    printf("Thanks\n");
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
}