CC = gcc
CFLAGS = -Wall -g

INC = -Iinc -Iunity
LINK = -lm

UNITY_SRC = unity/unity.c

PROJECT = Employee_Management_System

SRC = src/Enter_log_employee.c \
src/Enter_log_non_employee.c \
src/View_employee_by_parameter.c \
src/View_employees_temperature.c \
src/View_employees_visited.c \
src/View_non_employees_temperature.c \
src/View_non_employees_visited.c \
src/Write_data_to_emp_file.c \
src/Write_data_to_non_emp_file.c

MAIN = main.c

ifeq ($(OS),Windows_NT)
	RM = rm
	EXEC = $(PROJECT).out
	exeEXEC_TEST = test/test_$(PROJECT).out

else
	RM = rm
	EXEC = $(PROJECT).out
	EXEC_TEST = test/test_$(PROJECT).out

endif 
 $(EXEC) : $(SRC) $(MAIN)
	$(CC) $(CFLAGS) $(INC) $^ -o $@ $(LINK)

run : $(EXEC)
	./$(EXEC)

clean:
	$(RM) $(EXEC)

valgrind: $(EXEC) 
	valgrind ./$(EXEC)

$(EXEC_TEST): $(UNITY_SRC) $(SRC) test/test.c
	$(CC) $(CFLAGS) $(INC) $^ -o $@ $(LINK)

runtests: $(EXEC_TEST)
	./$(EXEC_TEST)