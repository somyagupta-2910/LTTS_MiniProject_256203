#include "product.h"

#include "unity.h"

Employee employee[1000];
int no_of_employees = 0;
Non_Employee non_employee[1000];
int no_of_non_employees = 0;
/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void view_employee_temp(void)
{
    TEST_ASSERT_EQUAL(WRONG_CHOICE, view_employees_temperature(employee, no_of_employees, 0));
    TEST_ASSERT_EQUAL(NORMAL_TEMP, view_employees_temperature(employee, no_of_employees, 1));
    TEST_ASSERT_EQUAL(ABNORMAL_TEMP, view_employees_temperature(employee, no_of_employees, 2));
}

void view_non_employee_temp(void)
{
    TEST_ASSERT_EQUAL(WRONG_CHOICE, view_non_employees_temperature(non_employee, no_of_non_employees, 0));
    TEST_ASSERT_EQUAL(NORMAL_TEMP, view_non_employees_temperature(non_employee, no_of_non_employees, 1));
    TEST_ASSERT_EQUAL(ABNORMAL_TEMP, view_non_employees_temperature(non_employee, no_of_non_employees, 2));
}

void write_emp(void)
{
    TEST_ASSERT_EQUAL(SUCCESS, write_emp_file(employee, no_of_employees));
}

void write_non_emp(void)
{
    TEST_ASSERT_EQUAL(SUCCESS, write_non_emp_file(non_employee, no_of_non_employees));
}

void view_param(void)
{
    TEST_ASSERT_EQUAL(WRONG_CHOICE, view_employee_by_parameters(employee, no_of_employees, 0));
}
int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */   
    RUN_TEST(view_employee_temp);
    RUN_TEST(view_non_employee_temp);
    RUN_TEST(write_emp);
    RUN_TEST(write_non_emp);
    RUN_TEST(view_param);

    /* Close the Unity Test Framework */
    return UNITY_END();
}