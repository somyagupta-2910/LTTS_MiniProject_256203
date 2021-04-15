#include "product.h"

int view_non_employees_temperature(int *no_of_non_employees)
{
    Non_Employee *non_employee;
    int temp_choice;
    printf("Enter 1 to view non-employees with normal temperatures\n");
    printf("Enter 2 to view non-employees with abnormal temperatures\n");
    scanf("%d", &temp_choice);
    if(temp_choice == 1)
    {
        for(int i=0; i<*no_of_non_employees; i++)
        {
            if(non_employee[i].temp_recorded < 38.00)
            {
                printf("Temporary ID: \nName: \nDate: \nIn-Time: \nTemperature Recorded: \n", non_employee[i].temp_id, non_employee[i].name, non_employee[i].entry_date, non_employee[i].entry_time, non_employee[i].temp_recorded);
            }
        }
        return 1;
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
        return 2;
    }
    return 0;
}