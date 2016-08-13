#include "Patient.h"

/********************
Patient(string f_name, string l_name, string problem) : Person(f_name, l_name)
Constructor that needs to add the parent class
*********************/
Patient::Patient(string f_name, string l_name, string problem) : Person(f_name, l_name) {
	setFirstName(f_name);
	setLastName(l_name);
	this->problem = problem;
}

/********************
Function: getProblem()

Returns: patient's problem as a string
*********************/
string Patient::getProblem() {
	return this->problem;
}
