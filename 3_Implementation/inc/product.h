/**
 * @file product.h
 * @author Somya Gupta (https://github.com/somyagupta-2910)
 * @brief .h document containing all the header files and tydef
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

/**
 * @brief Structure containing employee details
 * 
 */
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
    ID_DOES_NOT_EXIST=2,
    INVALID_NAME=3,
    SUCCESS = 4,
    NAME_DOES_NOT_EXIST = 5,
    WRONG_CHOICE = 6,
    NORMAL_TEMP = 7,
    ABNORMAL_TEMP = 8,
    FILE_NOT_EXIST = 9
}error_t;

/**
 * @brief Creates a log of the employee details when he enters the workplace and scans his/her temperature
 * 
 * @param employee All the details of the employee is stored in the employee structure
 * @param emp_s_no indicating the entry number of that employee
 */
error_t enter_employee_details(Employee *employee, int emp_s_no);

/**
 * @brief Creates a log of the employee details when he enters the workplace and scans his/her temperature
 * 
 * @param non_employee All the details of the non-employee is stored in the non_employee structure
 * @param non_emp_s_no Indicates the entry number of that person
 */
error_t enter_non_employee_details(Non_Employee *non_employee, int non_emp_s_no);

/**
 * @brief This Function enables the user to view the employees scanned themselves on a particular day
 * 
 * @param employee All the details of the employee is stored in the employee structure
 * @param no_of_employees_to_be_viewed Indicates the number of employess to be viewed
 * @return error_t 
 */
error_t view_employees_visited(Employee *employee, int no_of_employees_to_be_viewed);

/**
 * @brief This Function enables the user to view the number of non-employees scanned themselves on a particular day
 * 
 * @param non_employee All the details of the non-employee is stored in the non-employee structure
 * @param no_of_non_employees_to_be_viewed Indicates the number of non-employess to be viewed
 * @return error_t 
 */
error_t view_non_employees_visited(Non_Employee *non_employee, int no_of_non_employees_to_be_viewed);

/**
 * @brief This function allows a user to view the temperature of different employees
 * 
 * @param employee All the details of the employee is stored in the employee structure
 * @param no_of_employees Indicates the number of employees
 * @param temp_choice Allows the user to choose whether to view a list of normal or abnormal temperatures
 * @return error_t 
 */
error_t view_employees_temperature(Employee *employee, int no_of_employees, int temp_choice);

/**
 * @brief This function allows a user to view the temperature of different non-employees
 * 
 * @param non_employee All the details of the non-employee is stored in the non-employee structure
 * @param no_of_non_employees Indicates the number of non-employees
 * @param temp_choice Allows the user to choose whether to view a list of normal or abnormal temperatures
 * @return error_t 
 */
error_t view_non_employees_temperature(Non_Employee *non_employee, int no_of_non_employees, int temp_choice);

/**
 * @brief This function allows the user to find a particular employee by two different parameters
 * 
 * @param employee All the details of the employee is stored in the employee structure
 * @param no_of_employees Indicates the number of employees
 * @param search_choice llows the user to choose whether to search employee by ID or by name
 * @return error_t 
 */
error_t view_employee_by_parameters(Employee *employee, int no_of_employees, int search_choice);

/**
 * @brief This function lets a user to write data into the file
 * 
 * @param employee All the details of the employee is stored in the employee structure
 * @param no_of_employees Indicates the number of employees
 * @return error_t 
 */
error_t write_emp_file(Employee *employee, int no_of_employees);

/**
 * @brief 
 * 
 * @param non_employee All the details of the non-employee is stored in the non-employee structure
 * @param no_of_non_employees Indicates the number of non-employees
 * @return error_t 
 */
error_t write_non_emp_file(Non_Employee *non_employee, int no_of_non_employees);

#endif
