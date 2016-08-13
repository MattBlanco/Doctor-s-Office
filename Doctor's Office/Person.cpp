#include "Person.h"

#include <iostream>
#include <string>

using namespace std;

Person::Person(string firstname, string lastname) {
	this->f_name = firstname;
	this->l_name = lastname;
}

string Person::getFirstName()
{
	return f_name;
}

string Person::getLastName()
{
	return l_name;
}

void Person::setFirstName(string name)
{
	this->f_name = name;
}

void Person::setLastName(string name)
{
	this->l_name = name;
}

string Person::getFullName()
{
	return this->f_name + " " + this->l_name;
}

bool Person::isAvailable(slots day)
{
	if (schedule.isOpen(day)) {
		return true;
	}
	else {
		return false;
	}
}

void Person::addAppointment(slots day)
{
	schedule.addSlot(day);
}