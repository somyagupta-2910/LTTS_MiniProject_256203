#include "product.h"

error_t view_employee_by_name(struct Employee *employee, int no_of_employees)
{
    int search_flag = 0;
    char empname[30];
    printf("Please Enter Employee Name: \n");
    scanf("%s", empname);
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
    return WRONG_CHOICE;
}