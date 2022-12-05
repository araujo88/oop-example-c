#define LEN 255

typedef struct
{
	int employee_number;
	char name[LEN];
} EmployeeStruct;
typedef EmployeeStruct *EmployeePtr; // Employee Class

EmployeePtr employeeConstructor();								   // allocates memory in heap (as shown above)
void employeeInitialize(EmployeePtr this, int emp_no, char *name); // sets employee number and name

// Getters and setters
void employeeSetEmployeeNumber(EmployeePtr this, int emp_no);
int employeeGetEmployeeNumber(EmployeePtr this);
void employeeSetEmployeeName(EmployeePtr this, char *name);
char *employeeGetEmployeeName(EmployeePtr this);

EmployeePtr employeeDestructor(EmployeePtr this); // deallocates memory in the heap
