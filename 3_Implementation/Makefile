PROJECT_NAME = Employee_Management_System

TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC = src/Enter_log_employee.c \
src/Enter_log_non_employee.c \
src/View_employee_by_parameter.c \
src/View_employees_temperature.c \
src/View_employees_visited.c \
src/View_non_employees_temperature.c \
src/View_non_employees_visited.c \
src/Write_data_to_emp_file.c \
src/Write_data_to_non_emp_file.c

COV_SRC = test.c

TEST_SRC = test/test.c \
unity/unity.c 

INC_H = -Iinc
INC_U = -Iunity

ifdef OS
	RM = del 
	FixPath = $(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell uname), Linux)
		RM = rm -rf
		FixPath = $1
		EXEC = out
	endif
endif

.PHONY: run clean test doc all

all:
	gcc $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJECT_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJECT_NAME).$(EXEC))
test:
	gcc $(INC_H) $(INC_U) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:
	cp test/test.c .
	gcc -fprofile-arcs -ftest-coverage $(INC_H) $(INC_U) unity/unity.c test.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test.c


cppcheck:
	cppcheck --enable=all $(SRC) main.c
debug:
	gcc $(INC_H) $(SRC) main.c -g -o $(PROJECT_NAME).$(EXEC)
	gdb $(PROJECT_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)


clean:
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov