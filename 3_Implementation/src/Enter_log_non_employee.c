#include "product.h"

error_t enter_non_employee_details(struct Non_Employee *non_employee, int non_emp_s_no)
{
    int tempId;
    char name[60];
    char date[10];
    char time[8];
    float temperature;
	printf("Attendance System Loading...\n");
	printf("Enter your Temporary ID\n");
    scanf("%d", &tempId);
    non_employee[non_emp_s_no].temp_id = tempId;
    printf("Enter your name\n");
    scanf("%s", name);
    strcpy(non_employee[non_emp_s_no].name, name);
    printf("Enter date\n");
    scanf("%s", date);
    strcpy(non_employee[non_emp_s_no].entry_date, date);
    printf("Enter In-time\n");
    scanf("%s", time);
    strcpy(non_employee[non_emp_s_no].entry_time, time);
    printf("Enter temperature\n");
    scanf("%f", &temperature);
    non_employee[non_emp_s_no].temp_recorded = temperature;

    return SUCCESS;
}