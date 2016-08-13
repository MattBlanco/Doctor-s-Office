#include "Doctor.h"

Doctor::Doctor(string f_name, string l_name, string skill) : Person(f_name, l_name)
{
	setFirstName(f_name);
	setLastName(l_name);
	this->skill = skill;
} 

string Doctor::getSkill()
{
	return skill;
}
