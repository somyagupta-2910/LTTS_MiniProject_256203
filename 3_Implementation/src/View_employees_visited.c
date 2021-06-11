#include "product.h"

error_t view_employees_visited(struct Employee *employee)
{
    int no_of_employees_to_be_viewed; 
    printf("Enter the number of employees to be viewed\n");
    scanf("%d", &no_of_employees_to_be_viewed);
    for (int i = 0; i < no_of_employees_to_be_viewed; i++)
    {
        printf("Employee ID: \nName: \nDate: \nIn-Time: \nTemperature Recorded: \n", employee[i].emp_id, employee[i].name, employee[i].entry_date, employee[i].entry_time, employee[i].temp_recorded);
    }
    return SUCCESS; 
}        

