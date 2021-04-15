#include "product.h"

int view_non_employees_visited(int *no_of_non_employees_to_be_viewed)
{
    Non_Employee *non_employee;
    for (int i = 0; i < *no_of_non_employees_to_be_viewed; i++)
    {
        printf("Temporary ID: \nName: \nDate: \nIn-Time: \nTemperature Recorded: \n", non_employee[i].temp_id, non_employee[i].name, non_employee[i].entry_date, non_employee[i].entry_time, non_employee[i].temp_recorded);
    }
    return 1; 
}        

