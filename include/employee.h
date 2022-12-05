#define LEN 255

typedef struct
{
	int employee_number;
	char name[LEN];
} EmployeeStruct;
typedef EmployeeStruct *EmployeePtr; // Employee Class

EmployeePtr employeeConstructor(int emp_no, char *name); // allocates memory in heap (as shown above)

// Getters and setters
void employeeSetEmployeeNumber(EmployeePtr this, int emp_no);
int employeeGetEmployeeNumber(EmployeePtr this);
void employeeSetEmployeeName(EmployeePtr this, char *name);
char *employeeGetEmployeeName(EmployeePtr this);

EmployeePtr employeeDestructor(EmployeePtr this); // deallocates memory in the heap
