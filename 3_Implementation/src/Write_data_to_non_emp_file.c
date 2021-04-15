#include "product.h"

error_t write_non_emp_file(Employee *non_employee, int *no_of_non_employees, char *fileName)
{
    FILE *fp;
	fp = fopen(fileName,"w");
	if(fp == NULL)
	{
		printf("File does not exist\n");
		return FILE_NOT_EXIST;
	}
	for(int i=0; i<*no_of_non_employees; i++)
	{
		fwrite(&non_employee[i],sizeof(non_employee[i]),1,fp);
	}
    fclose(fp);
	return SUCCESS;
}