#ifndef DOCTOR_H
#define DOCTOR_H

#include "Person.h"

class Doctor : public Person
{
private:
	string skill;
public:
	Doctor(string f_name, string l_name, string skill);
	string getSkill();
};

#endif
