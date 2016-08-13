#include "Person.h"
#include "Doctor.h"
#include "Calendar.h"
#include "Patient.h"

#include <iostream>
#include <string>

using namespace std;

void schedule(Patient& x, Doctor& Dr, slots day) {
		if (!x.isAvailable(day)) {
			cout << "Patient is not available"<< endl;
		}
		else if (!Dr.isAvailable(day)) {
			cout << "Doctor is not availabl" << endl;
		}
		else {
			x.addAppointment(day);
			Dr.addAppointment(day);
		}
}

int main(void) {
	Patient P1("Bob", "Bobert", "Bowels");
	Doctor D1("Doctor", "Hafe", "Butt");
	Patient P2("Chris", "Joe", "Rash");

	schedule(P1, D1, MONDAY);
	schedule(P2, D1, MONDAY);
}