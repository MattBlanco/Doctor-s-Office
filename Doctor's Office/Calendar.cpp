#include "Calendar.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool Calendar::isAvailable(slots day){
	if (find(busyDays.begin(), busyDays.end(), day) != busyDays.end()) {
			return false;
	}
	return true;
}

void Calendar::addSlot(slots day) {
		busyDays.push_back(day);
}

