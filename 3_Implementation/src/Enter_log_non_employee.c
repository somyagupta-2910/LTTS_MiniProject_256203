#include "product.h"

void enter_non_employee_details(int *non_emp_s_no)
{
    Non_Employee *non_employee;
    int tempId;
    char name[60];
    char date[10];
    char time[8];
    float temperature;
	printf("Attendance System Loading...\n");
	printf("Enter your Temporary ID\n");
    scanf("%d", &tempId);
    non_employee[*non_emp_s_no].temp_id = tempId;
    printf("Enter your name\n");
    scanf("%s", &name);
    strcpy(non_employee[*non_emp_s_no].name, name);
    printf("Enter date\n");
    scanf("%s", &date);
    strcpy(non_employee[*non_emp_s_no].entry_date, date);
    printf("Enter In-time\n");
    scanf("%s", &time);
    strcpy(non_employee[*non_emp_s_no].entry_time, time);
    printf("Enter temperature\n");
    scanf("%s", &temperature);
    non_employee[*non_emp_s_no].temp_recorded = temperature;

    return;
}