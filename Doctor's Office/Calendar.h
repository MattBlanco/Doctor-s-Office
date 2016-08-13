#ifndef CALENDAR_H
#define CALENDAR_H

#include <iostream>
#include <string>
#include <vector>

enum slots { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

using namespace std;

class Calendar{
	private:
		vector<slots> busyDays;
	public:
		bool isAvailable(slots day);
		void addSlot(slots day);
};

#endif

