#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"
#include "Doctor.h"

class Patient : public Person
{
private:
	string problem;
public:
	Patient(string f_name, string l_name, string problem);
	string getProblem();
};

#endif

