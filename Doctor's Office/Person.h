#ifndef PERSON_H
#define PERSON_H

#include "Calendar.h"

#include <iostream>
#include <string>

using namespace std;

class Person {
	private:
		string f_name;
		string l_name;
	public:
		Person(string f_name, string l_name);
		Calendar schedule;
		void setFirstName(string name);
		void setLastName(string name);
		string getFirstName();
		string getLastName();
		string getFullName();
		bool isAvailable(slots day);
		void addAppointment(slots day);
};

#endif