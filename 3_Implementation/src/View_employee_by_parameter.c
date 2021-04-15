#include "product.h"

error_t view_employee_by_parameters(Employee *employee, int no_of_employees, int search_choice)
{
    int search_flag = 0;
    if(search_choice == 1)
    {
        int input_emp_ID;
        printf("Enter the ID to be searched.\n");
        scanf("%d", &input_emp_ID);
        for(int i=0; i<no_of_employees; i++)
        {
            if(employee[i].emp_id == input_emp_ID)
            {
                search_flag = 1;
                printf("Employee ID: \nName: \nDate: \nIn-Time: \nTemperature Recorded: \n", employee[i].emp_id, employee[i].name, employee[i].entry_date, employee[i].entry_time, employee[i].temp_recorded);
                break;
            }
        }
        if(search_flag)
        {
            return SUCCESS;
        }
        else
        {
            printf("ID not found");
            return ID_DOES_NOT_EXIST;
        }
    }
    else if(search_choice == 2)
    {
        char empname[30];
        printf("Please Enter Employee Name: \n");
        scanf("%s", &empname);
        printf("\nSearch Result.\n\n");
        for (int i = 0; i < no_of_employees; i++)
        {
            if (strcmp(employee[i].name, empname) == 0)
            {
                search_flag = 1;
                printf("Employee ID: \nName: \nDate: \nIn-Time: \nTemperature Recorded: \n", employee[i].emp_id, employee[i].name, employee[i].entry_date, employee[i].entry_time, employee[i].temp_recorded);
                break;
            }
        }
        if(search_flag)
        {
            return SUCCESS;
        }
        else
        {
            printf("Name not found");
            return NAME_DOES_NOT_EXIST;
        }
    }
    return WRONG_CHOICE;
}