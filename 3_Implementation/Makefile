PROJECT_NAME = Employee_Management_System

TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

SRC = src/Enter_log_employee.c \
src/Enter_log_non_employee.c \
src/View_employee_by_parameter.c \
src/View_employees_temperature.c \
src/View_employees_visited.c \
src/View_non_employees_temperature.c \
src/View_non_employees_visited.c \
src/Write_data_to_emp_file.c \
src/Write_data_to_non_emp_file.c

TEST_SRC = src/Enter_log_employee.c \
src/Enter_log_non_employee.c \
src/View_employee_by_parameter.c \
src/View_employees_temperature.c \
src/View_employees_visited.c \
src/View_non_employees_temperature.c \
src/View_non_employees_visited.c \
src/Write_data_to_emp_file.c \
src/Write_data_to_non_emp_file.c \
test/test.c \
unity/unity.c 

INC = -I inc -I unity
TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

.PHONY : all test coverage run clean doc

all:$(BUILD_DIR)
	gcc $(INC)  $(SRC) main.c -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))


coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC)  $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a Enter_log_employee.c Enter_log_non_employee.c View_employee_by_parameter.c View_employees_temperature.c View_employees_visited.c View_non_employees_temperature.c View_non_employees_visited.c Write_data_to_emp_file.c Write_data_to_non_emp_file.c




staticcheck:
	cppcheck --enable=all .


codesize:
	size $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

$(BUILD_DIR):
	mkdir $(BUILD_DIR)
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o test.$(EXEC)
	./test.$(EXEC)
valgrind:
	valgrind ./test.$(EXEC)
clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	$(RM) *.gcov 
	$(RM) *.gcda
	$(RM) *.gcno