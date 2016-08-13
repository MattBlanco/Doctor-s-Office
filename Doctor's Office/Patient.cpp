#include "Patient.h"

Patient::Patient(string f_name, string l_name, string problem) : Person(f_name, l_name) {
	setFirstName(f_name);
	setLastName(l_name);
	this->problem = problem;
}

string Patient::getProblem() {
	return this->problem;
}
