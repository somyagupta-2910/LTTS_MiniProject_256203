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
    
    fp = fopen("database.txt", "a+"); 
    int choice;
    while(1)
    {
        printf("Enter 1 Create a record list for a particular day of employees\n");
        printf("Enter 2 Create a record list for a particular day of non-employees\n");
        printf("Enter 3 to list employees visited in a day\n");
        printf("Enter 4 to list non-employees visited in a day\n");
        printf("Enter 5 to list employees with abnormal temperatures\n");
        printf("Enter 6 to list all the non-employees with abnormal temperatures\n");
        printf("Enter 7 to list all the employees with normal temperatures\n");
        printf("Enter 8 to list all the non-employees with normal temperatures\n");
        printf("Enter 9 to update employee data\n");
        printf("Enter 10 to save data to file\n"); 
        printf("Enter 11 to print data from file\n");
        printf("Enter 12 to delete data from record");
        printf("Enter 13 to display all records\n");
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
                    void enter_employee_details(Employee *employee, int *emp_s_no);
                    break;

                case 2:
                    int non_emp_s_no;
                    printf("Enter Data Entry Number\n");
                    void enter_non_employee_details(Non_Employee *non_employee, int *non_emp_s_no);
                    break;

                case 3:
                    printf("Thanks\n");
                    break;
                
                case 4:
                    printf("Thanks\n");
                    break;

                case 5:
                    printf("Thanks\n");
                    break;

                case 6:
                    printf("Thanks\n");
                    break;

                case 7:
                    printf("Thanks\n");
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