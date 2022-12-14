#include "../include/employee.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

EmployeePtr employeeConstructor(int emp_no, char *name)
{
    EmployeePtr this = (EmployeePtr)malloc(sizeof(EmployeePtr));
    this->employee_number = emp_no;
    strncpy(this->name, name, strlen(name));
    return this;
}

void employeeSetEmployeeNumber(EmployeePtr this, int emp_no)
{
    this->employee_number = emp_no;
}

int employeeGetEmployeeNumber(EmployeePtr this)
{
    return this->employee_number;
}

void employeeSetEmployeeName(EmployeePtr this, char *name)
{
    strncpy(this->name, name, strlen(name));
}

char *employeeGetEmployeeName(EmployeePtr this)
{
    return this->name;
}

EmployeePtr employeeDestructor(EmployeePtr this)
{
    if (this != NULL)
    {
        free(this);
        this = NULL;
        return this;
    }
    else
    {
        printf("Error: memory already freed\n");
        return NULL;
    }
}