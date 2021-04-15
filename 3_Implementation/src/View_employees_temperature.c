#include "product.h"

error_t view_employees_temperature(Employee *employee, int *no_of_employees, int *temp_choice)
{
    int temp_choice;
    printf("Enter 1 to view employees with normal temperatures\n");
    printf("Enter 2 to view employees with abnormal temperatures\n");
    scanf("%d", &temp_choice);
    if(temp_choice == 1)
    {
        for(int i=0; i<*no_of_employees; i++)
        {
            if(employee[i].temp_recorded < 38.00)
            {
                printf("Employee ID: \nName: \nDate: \nIn-Time: \nTemperature Recorded: \n", employee[i].emp_id, employee[i].name, employee[i].entry_date, employee[i].entry_time, employee[i].temp_recorded);
            }
        }
        return NORMAL_TEMP;
    }
    else if(temp_choice == 2)
    {
        for(int i=0; i<*no_of_employees; i++)
        {
            if(employee[i].temp_recorded >= 38.00)
            {
                printf("Employee ID: \nName: \nDate: \nIn-Time: \nTemperature Recorded: \n", employee[i].emp_id, employee[i].name, employee[i].entry_date, employee[i].entry_time, employee[i].temp_recorded);
            }
        }
        return ABNORMAL_TEMP;
    }
    return WRONG_CHOICE;
}