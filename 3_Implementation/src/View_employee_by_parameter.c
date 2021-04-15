#include "product.h"

int view_employee_by_parameters(int *no_of_employees)
{
    Employee *employee;
    int search_choice;
    int search_flag = 0;
    printf("Enter 1 to search employee by ID.\n");
    printf("Enter 2 to search employee by Name.\n");
    scanf("%d", &search_choice);
    if(search_choice == 1)
    {
        int input_emp_ID;
        printf("Enter the ID to be searched.\n");
        scanf("%d", &input_emp_ID);
        for(int i=0; i<*no_of_employees; i++)
        {
            if(employee[i].emp_id == input_emp_ID)
            {
                printf("Employee ID: \nName: \nDate: \nIn-Time: \nTemperature Recorded: \n", employee[i].emp_id, employee[i].name, employee[i].entry_date, employee[i].entry_time, employee[i].temp_recorded);
            }
        }
        if(search_flag)
        {
            return 1;
        }
        else
        {
            printf("ID not found");
            return 0;
        }
    }
    else if(search_choice == 2)
    {
        char empname;
        printf("Please Enter Employee Name: \n");
        scanf("%s", &empname);
        printf("\nSearch Result.\n\n");
        for (int i = 0; i < *no_of_employees; i++)
        {
            if (strcmp(employee[i].name, empname) == 0)
            {
                printf("Employee ID: \nName: \nDate: \nIn-Time: \nTemperature Recorded: \n", employee[i].emp_id, employee[i].name, employee[i].entry_date, employee[i].entry_time, employee[i].temp_recorded);
            }
        }
        if(search_flag)
        {
            return 1;
        }
        else
        {
            printf("Name not found");
            return 0;
        }
    }
    return 0;
}