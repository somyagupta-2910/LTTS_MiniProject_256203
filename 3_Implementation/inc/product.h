/**
 * @file product.h
 * @author Somya Gupta (https://github.com/somyagupta-2910)
 * @brief 
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __PRODUCT_H__
#define __PRODUCT_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * @brief Structure containing employee details
 * 
 */

typedef struct Employee
{
    int emp_id;
    char name[60];
    char entry_date[10];
    char entry_time[8];
    float temp_recorded;
}Employee;

typedef struct Non_Employee
{
    int temp_id;
    char name[60];
    char entry_date[10];
    char entry_time[8];
    float temp_recorded;
}Non_Employee;

/**
 * @brief Error values for unit testing
 * 
 */
typedef enum error_t{
    START = 1,
    ID_EXISTS=2,
    INVALID_NAME=3,
    SUCCESS = 4
}error_t;

/**
 * @brief Creates a log of the employee details when he enters the workplace and scans his/her temperature
 * 
 * @param employee All the details of the employee is stored in the employee structure
 * @param emp_s_no indicating the entry number of that employee
 */
void enter_employee_details(int *emp_s_no);

/**
 * @brief Creates a log of the employee details when he enters the workplace and scans his/her temperature
 * 
 * @param non_employee All the details of the non-employee is stored in the non_employee structure
 * @param non_emp_s_no indicating the entry number of that person
 */
void enter_non_employee_details(int *non_emp_s_no);

int view_employees_visited(int *no_of_employees_to_be_viewed);

int view_non_employees_visited(int *no_of_non_employees_to_be_viewed);

int view_employees_temperature(int *no_of_employees);

int view_non_employees_temperature(int *no_of_non_employees);

int view_employee_by_parameters(int *no_of_employees);

#endif
