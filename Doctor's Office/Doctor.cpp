#include "Doctor.h"

/********************
Doctor(string f_name, string l_name, string skill) : Person(f_name, l_name)
Constructor that needs to add the parent class
*********************/
Doctor::Doctor(string f_name, string l_name, string skill) : Person(f_name, l_name)
{
	setFirstName(f_name);
	setLastName(l_name);
	this->skill = skill;
} 

/********************
Function: getSkill()

Returns: skill of the doctor
*********************/
string Doctor::getSkill()
{
	return skill;
}
