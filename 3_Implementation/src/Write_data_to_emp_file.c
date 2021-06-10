#include "product.h"

error_t write_emp_file(struct Employee *employee, int no_of_employees)
{
	FILE *fp;
	fp = fopen("employee_database.txt","w");
	if(fp == NULL)
	{
		printf("File does not exist\n");
		return FILE_NOT_EXIST;
	}
	for(int i=0; i<no_of_employees; i++)
	{
		fwrite(&employee[i],sizeof(employee[i]),1,fp);
	}
    fclose(fp);
	return SUCCESS;
}