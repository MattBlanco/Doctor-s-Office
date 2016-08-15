#include "Person.h"

using namespace std;

Person::Person(string firstname, string lastname) {
	this->f_name = firstname;
	this->l_name = lastname;
}

/********************
Function: getFirstName()

Returns: first name of the person
*********************/
string Person::getFirstName()
{
	return f_name;
}

/********************
Function: getLastName()

Returns: last name of the person
*********************/
string Person::getLastName()
{
	return l_name;
}

/********************
Function: setFirstName()
Sets the first name of the person
Returns: none
*********************/
void Person::setFirstName(string name)
{
	this->f_name = name;
}

/********************
Function: setLastName()
Sets the last name of the person
Returns: none
*********************/
void Person::setLastName(string name)
{
	this->l_name = name;
}

/********************
Function: getFullName()

Returns: the full name of the person
*********************/
string Person::getFullName()
{
	return this->f_name + " " + this->l_name;
}


/********************
Function: isAvailable(slots day)
Using the day provided, uses the Calendar function isOpen(day) to check if a person is available that day

Returns: boolean
*********************/
bool Person::isAvailable(slots day)
{
	if (schedule.isOpen(day)) {
		return true;
	}
	else {
		return false;
	}
}


/********************
Function: addAppointment(slots day)
Using the day provided, uses the Calendar function addSlot(day) to check if a person is available that day

Returns: boolean
*********************/
void Person::addAppointment(slots day)
{
	schedule.addSlot(day);
}