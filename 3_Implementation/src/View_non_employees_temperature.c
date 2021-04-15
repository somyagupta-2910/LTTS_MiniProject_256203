#include "product.h"

error_t view_non_employees_temperature(Non_Employee *non_employee, int *no_of_non_employees, int *temp_choice)
{
    if(temp_choice == 1)
    {
        for(int i=0; i<*no_of_non_employees; i++)
        {
            if(non_employee[i].temp_recorded < 38.00)
            {
                printf("Temporary ID: \nName: \nDate: \nIn-Time: \nTemperature Recorded: \n", non_employee[i].temp_id, non_employee[i].name, non_employee[i].entry_date, non_employee[i].entry_time, non_employee[i].temp_recorded);
            }
        }
        return NORMAL_TEMP;
    }
    else if(temp_choice == 2)
    {
        for(int i=0; i<*no_of_non_employees; i++)
        {
            if(non_employee[i].temp_recorded >= 38.00)
            {
                printf("Temporary ID: \nName: \nDate: \nIn-Time: \nTemperature Recorded: \n", non_employee[i].temp_id, non_employee[i].name, non_employee[i].entry_date, non_employee[i].entry_time, non_employee[i].temp_recorded);
            }
        }
        return ABNORMAL_TEMP;
    }
    return WRONG_CHOICE;
}