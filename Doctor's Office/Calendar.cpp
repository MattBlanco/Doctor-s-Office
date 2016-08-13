#include "Calendar.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool Calendar::isOpen(slots day){
	if (find(busyDays.begin(), busyDays.end(), day) != busyDays.end()) {
			return false;
	}
	else {
		return true;
	}
}

void Calendar::addSlot(slots day) {
		busyDays.push_back(day);
}