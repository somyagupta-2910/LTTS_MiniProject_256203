#include "product.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void enter_employee_details(Employee *employee, int *emp_s_no)
{
    int employeeId;
    char name[60];
    char date[10];
    char time[8];
    float temperature;
	printf("Attendance System Loading...\n");
	printf("Enter your Employee ID\n");
    scanf("%d", &employeeId);
    employee[*emp_s_no].emp_id = employeeId;
    printf("Enter your name\n");
    scanf("%s", &name);
    strcpy(employee[*emp_s_no].name, name);
    printf("Enter date\n");
    scanf("%s", &date);
    strcpy(employee[*emp_s_no].entry_date, date);
    printf("Enter In-time\n");
    scanf("%s", &time);
    strcpy(employee[*emp_s_no].entry_time, time);
    printf("Enter temperature\n");
    scanf("%s", &temperature);
    employee[*emp_s_no].temp_recorded = temperature;

    return;
}