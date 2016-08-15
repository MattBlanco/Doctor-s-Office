#include "Calendar.h"

using namespace std;

/********************
Function: isOpen(slots day)
Checks a calendar has a day scheduled by searching through a vector

Returns: false if the day is found in the vector, true if it is not
*********************/
bool Calendar::isOpen(slots day){
	if (find(busyDays.begin(), busyDays.end(), day) != busyDays.end()) {
			return false;
	}
	else {
		return true;
	}
}

/********************
Function: addSlot(slots day)
Adds the day to the Calendar's vector

Returns: none
*********************/
void Calendar::addSlot(slots day) {
		busyDays.push_back(day);
}