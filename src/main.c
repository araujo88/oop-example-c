#include <stdio.h>
#include "../include/employee.h"

int main(int argc, char *argv[])
{
	EmployeePtr e = employeeConstructor();
	employeeInitialize(e, 1, "John Doe");

	printf("Employee name: %s, employee number: %d\n", employeeGetEmployeeName(e), employeeGetEmployeeNumber(e));

	e = employeeDestructor(e);

	return 0;
}
